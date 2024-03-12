/*
 * parse.c - Parse source file.
 */

#include <stdio.h>
#include <stdlib.h>

#include "absyn.h"
#include "errormsg.h"
#include "parse.h"
#include "prabsyn.h"
#include "symbol.h"
#include "util.h"
#include "y.tab.h"

extern A_Exp absyn_root;

/* Parse source file fname; 
 * return abstract syntax data structure.
 */
A_Exp parse(string fname) {
    EM_reset(fname);
    if (!yyparse()) {
        puts("Parsing successful!");
        return absyn_root;
    } else {
        fprintf(stderr, "Parsing failed\n");
        return NULL;
    }
}

int main(int argc, char ** argv) {
    if (argc != 2) {
        fprintf(stderr,"usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    A_Exp program = parse(argv[1]);
    if (program) {
        pr_exp(stdout, program, 0);
        putchar('\n');
    }
    return EXIT_SUCCESS;
}
