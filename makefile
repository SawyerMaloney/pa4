CC = gcc
FLAGS = -Wall -Werror -std=c99 -D_XOPEN_SOURCE=700 -g
COMMON_HEADERS =  errormsg.h util.h

parse: parse.o prabsyn.o absyn.o symbol.o table.o y.tab.o lex.yy.o errormsg.o util.o
	$(CC) $(FLAGS) $^ -o $@

parse.o: parse.c y.tab.h $(COMMON_HEADERS)
	$(CC) $(FLAGS) -c parse.c

prabsyn.o: prabsyn.c prabsyn.h symbol.h table.h util.h
	$(CC) $(FLAGS) -c $<

y.tab.o: y.tab.c
	$(CC) $(FLAGS) -c $<

y.tab.c: tiger.grm
	bison -dv $< -o $@

y.tab.h: y.tab.c

lex.yy.o: lex.yy.c y.tab.h $(COMMON_HEADERS)
	$(CC) $(FLAGS) -c $<

lex.yy.c: tiger.lex
	lex $<

symbol.o: symbol.c $(COMMON_HEADERS)
	$(CC) $(FLAGS) -c $<

table.o: table.c $(COMMON_HEADERS)
	$(CC) $(FLAGS) -c $<

errormsg.o: errormsg.c $(COMMON_HEADERS)
	$(CC) $(FLAGS) -c $<

util.o: util.c util.h
	$(CC) $(FLAGS) -c $<

clean: 
	rm -f parse *.o lex.yy.c y.tab.* y.output

