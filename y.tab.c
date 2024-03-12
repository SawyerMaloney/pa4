/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tiger.grm"

/*
Authors: 
Sawyer Maloney - malonesm@bc.edu
John (Jack) Edwards - edwarddn@bc.edu
*/

#include <stdio.h>
#include "absyn.h"
#include "errormsg.h"
#include "symbol.h"
#include "util.h"
#include "y.tab.h"

int yylex(); /* lexing function prototype */
void yyerror(char * s);
E_Pos to_E_Pos(YYLTYPE pos);

A_Exp absyn_root;


#line 93 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    STRING = 259,                  /* STRING  */
    INT = 260,                     /* INT  */
    COMMA = 261,                   /* COMMA  */
    COLON = 262,                   /* COLON  */
    SEMICOLON = 263,               /* SEMICOLON  */
    LPAREN = 264,                  /* LPAREN  */
    RPAREN = 265,                  /* RPAREN  */
    LBRACK = 266,                  /* LBRACK  */
    RBRACK = 267,                  /* RBRACK  */
    LBRACE = 268,                  /* LBRACE  */
    RBRACE = 269,                  /* RBRACE  */
    DOT = 270,                     /* DOT  */
    PLUS = 271,                    /* PLUS  */
    MINUS = 272,                   /* MINUS  */
    TIMES = 273,                   /* TIMES  */
    DIVIDE = 274,                  /* DIVIDE  */
    EQ = 275,                      /* EQ  */
    NEQ = 276,                     /* NEQ  */
    LT = 277,                      /* LT  */
    LE = 278,                      /* LE  */
    GT = 279,                      /* GT  */
    GE = 280,                      /* GE  */
    AND = 281,                     /* AND  */
    OR = 282,                      /* OR  */
    ASSIGN = 283,                  /* ASSIGN  */
    ARRAY = 284,                   /* ARRAY  */
    IF = 285,                      /* IF  */
    THEN = 286,                    /* THEN  */
    ELSE = 287,                    /* ELSE  */
    WHILE = 288,                   /* WHILE  */
    FOR = 289,                     /* FOR  */
    TO = 290,                      /* TO  */
    DO = 291,                      /* DO  */
    LET = 292,                     /* LET  */
    IN = 293,                      /* IN  */
    END = 294,                     /* END  */
    OF = 295,                      /* OF  */
    BREAK = 296,                   /* BREAK  */
    NIL = 297,                     /* NIL  */
    FUNCTION = 298,                /* FUNCTION  */
    VAR = 299,                     /* VAR  */
    TYPE = 300,                    /* TYPE  */
    LOW = 301,                     /* LOW  */
    UMINUS = 302                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "tiger.grm"

    /* int pos */
    int ival;
    string sval;
    A_Exp exp;
    A_Var var;
    A_Dec dec;
    A_Type type;
    A_ExpList explist;
    A_DecList declist;
    A_Field field;
    A_FieldList fieldlist;
    A_FunDec fundec;
    A_FunDecList fundeclist;
    A_TypeDec typedec;
    A_TypeDecList typedeclist;
    A_EField efield;
    A_EFieldList efieldlist;

#line 210 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
typedef E_Pos YYLTYPE;


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_COLON = 7,                      /* COLON  */
  YYSYMBOL_SEMICOLON = 8,                  /* SEMICOLON  */
  YYSYMBOL_LPAREN = 9,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 10,                    /* RPAREN  */
  YYSYMBOL_LBRACK = 11,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 12,                    /* RBRACK  */
  YYSYMBOL_LBRACE = 13,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 14,                    /* RBRACE  */
  YYSYMBOL_DOT = 15,                       /* DOT  */
  YYSYMBOL_PLUS = 16,                      /* PLUS  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_TIMES = 18,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 19,                    /* DIVIDE  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_NEQ = 21,                       /* NEQ  */
  YYSYMBOL_LT = 22,                        /* LT  */
  YYSYMBOL_LE = 23,                        /* LE  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_ARRAY = 29,                     /* ARRAY  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_TO = 35,                        /* TO  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_LET = 37,                       /* LET  */
  YYSYMBOL_IN = 38,                        /* IN  */
  YYSYMBOL_END = 39,                       /* END  */
  YYSYMBOL_OF = 40,                        /* OF  */
  YYSYMBOL_BREAK = 41,                     /* BREAK  */
  YYSYMBOL_NIL = 42,                       /* NIL  */
  YYSYMBOL_FUNCTION = 43,                  /* FUNCTION  */
  YYSYMBOL_VAR = 44,                       /* VAR  */
  YYSYMBOL_TYPE = 45,                      /* TYPE  */
  YYSYMBOL_LOW = 46,                       /* LOW  */
  YYSYMBOL_UMINUS = 47,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_exp = 50,                       /* exp  */
  YYSYMBOL_lvalue = 51,                    /* lvalue  */
  YYSYMBOL_assign = 52,                    /* assign  */
  YYSYMBOL_func_call = 53,                 /* func_call  */
  YYSYMBOL_arith = 54,                     /* arith  */
  YYSYMBOL_select = 55,                    /* select  */
  YYSYMBOL_boolean_exp = 56,               /* boolean_exp  */
  YYSYMBOL_records = 57,                   /* records  */
  YYSYMBOL_record_list = 58,               /* record_list  */
  YYSYMBOL_record = 59,                    /* record  */
  YYSYMBOL_exp_sequence = 60,              /* exp_sequence  */
  YYSYMBOL_exp_list = 61,                  /* exp_list  */
  YYSYMBOL_exp_list_nonempty = 62,         /* exp_list_nonempty  */
  YYSYMBOL_iter = 63,                      /* iter  */
  YYSYMBOL_comparison = 64,                /* comparison  */
  YYSYMBOL_dec_seq = 65,                   /* dec_seq  */
  YYSYMBOL_dec = 66,                       /* dec  */
  YYSYMBOL_function_dec_list = 67,         /* function_dec_list  */
  YYSYMBOL_type_dec = 68,                  /* type_dec  */
  YYSYMBOL_type_dec_list = 69,             /* type_dec_list  */
  YYSYMBOL_type = 70,                      /* type  */
  YYSYMBOL_type_fields = 71,               /* type_fields  */
  YYSYMBOL_type_field_list = 72,           /* type_field_list  */
  YYSYMBOL_type_field = 73,                /* type_field  */
  YYSYMBOL_variable_dec = 74,              /* variable_dec  */
  YYSYMBOL_function_dec = 75               /* function_dec  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    95,    95,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   116,   117,   118,   119,   121,   123,   125,   126,   127,
     128,   130,   131,   134,   135,   138,   139,   141,   142,   144,
     146,   147,   149,   150,   152,   153,   156,   157,   159,   160,
     161,   162,   163,   164,   168,   169,   171,   172,   173,   177,
     178,   180,   182,   183,   185,   186,   187,   189,   191,   193,
     194,   196,   198,   199,   201,   202
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "STRING", "INT",
  "COMMA", "COLON", "SEMICOLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "DOT", "PLUS", "MINUS", "TIMES", "DIVIDE", "EQ",
  "NEQ", "LT", "LE", "GT", "GE", "AND", "OR", "ASSIGN", "ARRAY", "IF",
  "THEN", "ELSE", "WHILE", "FOR", "TO", "DO", "LET", "IN", "END", "OF",
  "BREAK", "NIL", "FUNCTION", "VAR", "TYPE", "LOW", "UMINUS", "$accept",
  "program", "exp", "lvalue", "assign", "func_call", "arith", "select",
  "boolean_exp", "records", "record_list", "record", "exp_sequence",
  "exp_list", "exp_list_nonempty", "iter", "comparison", "dec_seq", "dec",
  "function_dec_list", "type_dec", "type_dec_list", "type", "type_fields",
  "type_field_list", "type_field", "variable_dec", "function_dec", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-34)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      69,    16,   -34,   -34,    59,    69,    69,    69,     5,   -34,
     -34,   -34,    15,   232,    -2,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,    69,    69,    27,   -34,   232,     8,   -34,   188,
      98,     3,   -24,   -34,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    30,    69,   232,
      37,    43,   204,    31,    36,    46,   -34,    69,   -34,    69,
      69,    69,    69,    50,    51,    52,   -34,   -34,    11,   -34,
     -34,    22,    -8,    -8,   -34,   -34,   255,   255,   255,   255,
     255,   255,   265,   244,   220,   -34,   232,   -34,    69,    18,
      69,   -34,    27,   232,   171,   232,   151,    -7,    57,    -4,
      47,   -34,   -34,   -34,   232,    69,   232,   -34,    69,    69,
     -34,    67,    68,    69,    -1,   232,   232,   130,    70,    65,
      73,   -34,    53,   232,   -34,    67,    40,   -34,    69,    79,
      -3,    67,    69,    71,    80,   232,   -34,    81,    69,   -34,
     232,   -34,   -34,    74,   232,    69,   232
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    21,     4,     3,     0,     0,     0,     0,     0,    55,
       6,     5,     0,     2,     7,     8,    11,    12,     9,    14,
      10,    13,    42,     0,    36,    18,    40,     0,    15,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,    43,     0,     0,     0,    35,    37,     0,    19,     0,
       0,     0,     0,     0,     0,     0,    54,    58,    62,    56,
      57,    59,    27,    28,    29,    30,    48,    49,    51,    53,
      50,    52,    33,    34,     0,    24,    25,    26,     0,    22,
       0,    16,     0,    41,    32,    46,     0,     0,     0,     0,
       0,    63,    60,    23,    45,     0,    39,    38,     0,     0,
      20,    68,     0,     0,     0,    17,    31,     0,     0,     0,
      67,    69,     0,    72,    64,    68,     0,    61,     0,     0,
       0,     0,     0,     0,     0,    47,    71,     0,     0,    70,
      73,    65,    66,     0,    74,     0,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,    -5,    29,   -34,   -34,   -34,   -34,   -34,   -34,    24,
     -34,    39,   -34,   -28,   -34,   -33,   -34,   -34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    12,    26,    14,    15,    16,    17,    18,    19,    54,
      55,    56,    27,    50,    51,    20,    21,    32,    66,    67,
      68,    69,   127,   119,   120,   121,    70,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    57,   124,   112,   137,    28,    29,    30,    31,    46,
      36,    37,   125,    47,    62,    33,    57,   138,    58,    63,
      64,    65,    49,    52,   113,    22,    48,    23,   126,    24,
      53,    61,   110,    85,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    87,    86,    88,
      91,    90,    92,    98,    99,   100,    65,    93,   105,    94,
      95,    96,     1,     2,     3,    63,   111,   114,     4,    25,
     118,   122,     1,     2,     3,   130,     5,   129,     4,   131,
     134,   132,   136,   142,   143,   141,     5,   107,   104,     6,
     106,    97,     7,     8,   145,   102,     9,   133,   139,     6,
      10,    11,     7,     8,     0,   115,     9,   101,   116,   117,
      10,    11,     0,   123,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,   135,     0,
       0,     0,   140,     0,    60,     0,     0,     0,   144,     0,
       0,     0,     0,     0,     0,   146,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,   128,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,   109,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
       0,     0,     0,   108,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    89,     0,     0,    59,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   103,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43
};

static const yytype_int16 yycheck[] =
{
       0,     8,     3,     7,     7,     5,     6,     7,     3,    11,
      18,    19,    13,    15,    38,     0,     8,    20,    10,    43,
      44,    45,    22,    23,    28,     9,    28,    11,    29,    13,
       3,    28,    39,     3,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    10,    48,     6,
      14,    20,     6,     3,     3,     3,    45,    57,    40,    59,
      60,    61,     3,     4,     5,    43,     9,    20,     9,    10,
       3,     3,     3,     4,     5,    10,    17,     7,     9,     6,
      40,    28,     3,     3,     3,    14,    17,    92,    88,    30,
      90,    62,    33,    34,    20,    71,    37,   125,   131,    30,
      41,    42,    33,    34,    -1,   105,    37,    68,   108,   109,
      41,    42,    -1,   113,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,   128,    -1,
      -1,    -1,   132,    -1,    36,    -1,    -1,    -1,   138,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    32,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    12,    -1,    -1,    31,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    12,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     9,    17,    30,    33,    34,    37,
      41,    42,    49,    50,    51,    52,    53,    54,    55,    56,
      63,    64,     9,    11,    13,    10,    50,    60,    50,    50,
      50,     3,    65,     0,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    11,    15,    28,    50,
      61,    62,    50,     3,    57,    58,    59,     8,    10,    31,
      36,    28,    38,    43,    44,    45,    66,    67,    68,    69,
      74,    75,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,     3,    50,    10,     6,    12,
      20,    14,     6,    50,    50,    50,    50,    60,     3,     3,
       3,    69,    67,    12,    50,    40,    50,    59,    32,    35,
      39,     9,     7,    28,    20,    50,    50,    50,     3,    71,
      72,    73,     3,    50,     3,    13,    29,    70,    36,     7,
      10,     6,    28,    71,    40,    50,     3,     7,    20,    73,
      50,    14,     3,     3,    50,    20,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    51,    51,    51,    51,    52,    53,    54,    54,    54,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    68,    69,    69,    70,    70,    70,    71,    71,    72,
      72,    73,    74,    74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     6,     2,     3,
       5,     1,     4,     4,     3,     3,     4,     3,     3,     3,
       3,     6,     4,     3,     3,     1,     0,     1,     3,     3,
       1,     3,     0,     1,     1,     3,     4,     8,     3,     3,
       3,     3,     3,     3,     2,     0,     1,     1,     1,     1,
       2,     4,     1,     2,     1,     3,     3,     1,     0,     1,
       3,     3,     4,     6,     7,     9
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: exp  */
#line 95 "tiger.grm"
             { absyn_root = (yyvsp[0].exp); }
#line 1508 "y.tab.c"
    break;

  case 3: /* exp: INT  */
#line 97 "tiger.grm"
                        { (yyval.exp) = make_A_IntExp(to_E_Pos((yylsp[0])), (yyvsp[0].ival)); }
#line 1514 "y.tab.c"
    break;

  case 4: /* exp: STRING  */
#line 98 "tiger.grm"
                        { (yyval.exp) = make_A_StringExp(to_E_Pos((yylsp[0])), (yyvsp[0].sval)); }
#line 1520 "y.tab.c"
    break;

  case 5: /* exp: NIL  */
#line 99 "tiger.grm"
                        { (yyval.exp) = make_A_NilExp(to_E_Pos((yylsp[0]))); }
#line 1526 "y.tab.c"
    break;

  case 6: /* exp: BREAK  */
#line 100 "tiger.grm"
                        { (yyval.exp) = make_A_BreakExp(to_E_Pos((yylsp[0]))); }
#line 1532 "y.tab.c"
    break;

  case 7: /* exp: lvalue  */
#line 101 "tiger.grm"
                        { (yyval.exp) = make_A_VarExp(to_E_Pos((yylsp[0])), (yyvsp[0].var)); }
#line 1538 "y.tab.c"
    break;

  case 8: /* exp: assign  */
#line 102 "tiger.grm"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1544 "y.tab.c"
    break;

  case 9: /* exp: select  */
#line 103 "tiger.grm"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1550 "y.tab.c"
    break;

  case 10: /* exp: iter  */
#line 104 "tiger.grm"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1556 "y.tab.c"
    break;

  case 11: /* exp: func_call  */
#line 105 "tiger.grm"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1562 "y.tab.c"
    break;

  case 12: /* exp: arith  */
#line 106 "tiger.grm"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1568 "y.tab.c"
    break;

  case 13: /* exp: comparison  */
#line 107 "tiger.grm"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1574 "y.tab.c"
    break;

  case 14: /* exp: boolean_exp  */
#line 108 "tiger.grm"
                        { (yyval.exp) = (yyvsp[0].exp); }
#line 1580 "y.tab.c"
    break;

  case 15: /* exp: MINUS exp  */
#line 109 "tiger.grm"
                                        { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-1])), A_MINUS_OP, make_A_IntExp(to_E_Pos((yylsp[-1])), 0), (yyvsp[0].exp)); }
#line 1586 "y.tab.c"
    break;

  case 16: /* exp: ID LBRACE records RBRACE  */
#line 110 "tiger.grm"
                                        { (yyval.exp) = make_A_RecordExp(to_E_Pos((yylsp[-3])), make_S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].efieldlist)); }
#line 1592 "y.tab.c"
    break;

  case 17: /* exp: ID LBRACK exp RBRACK OF exp  */
#line 111 "tiger.grm"
                                        { (yyval.exp) = make_A_ArrayExp(to_E_Pos((yylsp[-5])), make_S_Symbol((yyvsp[-5].sval)), (yyvsp[-3].exp), (yyvsp[0].exp)); }
#line 1598 "y.tab.c"
    break;

  case 18: /* exp: LPAREN RPAREN  */
#line 112 "tiger.grm"
                                        { (yyval.exp) = make_A_SeqExp(to_E_Pos((yylsp[-1])), NULL); }
#line 1604 "y.tab.c"
    break;

  case 19: /* exp: LPAREN exp_sequence RPAREN  */
#line 113 "tiger.grm"
                                        { (yyval.exp) = make_A_SeqExp(to_E_Pos((yylsp[-2])), (yyvsp[-1].explist)); }
#line 1610 "y.tab.c"
    break;

  case 20: /* exp: LET dec_seq IN exp_sequence END  */
#line 114 "tiger.grm"
                                        { (yyval.exp) = make_A_LetExp(to_E_Pos((yylsp[-4])), (yyvsp[-3].declist), make_A_SeqExp(to_E_Pos((yylsp[-4])), (yyvsp[-1].explist))); }
#line 1616 "y.tab.c"
    break;

  case 21: /* lvalue: ID  */
#line 116 "tiger.grm"
                                { (yyval.var) = make_A_SimpleVar(to_E_Pos((yylsp[0])), make_S_Symbol((yyvsp[0].sval))); }
#line 1622 "y.tab.c"
    break;

  case 22: /* lvalue: ID LBRACK exp RBRACK  */
#line 117 "tiger.grm"
                                { (yyval.var) = make_A_SubscriptVar(to_E_Pos((yylsp[-3])), make_A_SimpleVar(to_E_Pos((yylsp[-3])), make_S_Symbol((yyvsp[-3].sval))), (yyvsp[-1].exp)); }
#line 1628 "y.tab.c"
    break;

  case 23: /* lvalue: lvalue LBRACK exp RBRACK  */
#line 118 "tiger.grm"
                                { (yyval.var) = make_A_SubscriptVar(to_E_Pos((yylsp[-3])), (yyvsp[-3].var), (yyvsp[-1].exp)); }
#line 1634 "y.tab.c"
    break;

  case 24: /* lvalue: lvalue DOT ID  */
#line 119 "tiger.grm"
                                { (yyval.var) = make_A_FieldVar(to_E_Pos((yylsp[-2])), (yyvsp[-2].var), make_S_Symbol((yyvsp[0].sval))); }
#line 1640 "y.tab.c"
    break;

  case 25: /* assign: lvalue ASSIGN exp  */
#line 121 "tiger.grm"
                           { (yyval.exp) = make_A_AssignExp(to_E_Pos((yylsp[-2])), (yyvsp[-2].var), (yyvsp[0].exp)); }
#line 1646 "y.tab.c"
    break;

  case 26: /* func_call: ID LPAREN exp_list RPAREN  */
#line 123 "tiger.grm"
                                      { (yyval.exp) = make_A_CallExp(to_E_Pos((yylsp[-3])), make_S_Symbol((yyvsp[-3].sval)), (yyvsp[-1].explist)); }
#line 1652 "y.tab.c"
    break;

  case 27: /* arith: exp PLUS exp  */
#line 125 "tiger.grm"
                      { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_PLUS_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1658 "y.tab.c"
    break;

  case 28: /* arith: exp MINUS exp  */
#line 126 "tiger.grm"
                      { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_MINUS_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1664 "y.tab.c"
    break;

  case 29: /* arith: exp TIMES exp  */
#line 127 "tiger.grm"
                      { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_TIMES_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1670 "y.tab.c"
    break;

  case 30: /* arith: exp DIVIDE exp  */
#line 128 "tiger.grm"
                      { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_DIVIDE_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1676 "y.tab.c"
    break;

  case 31: /* select: IF exp THEN exp ELSE exp  */
#line 130 "tiger.grm"
                                 { (yyval.exp) = make_A_IfExp(to_E_Pos((yylsp[-5])), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1682 "y.tab.c"
    break;

  case 32: /* select: IF exp THEN exp  */
#line 131 "tiger.grm"
                                 { (yyval.exp) = make_A_IfExp(to_E_Pos((yylsp[-3])), (yyvsp[-2].exp), (yyvsp[-2].exp), NULL); }
#line 1688 "y.tab.c"
    break;

  case 33: /* boolean_exp: exp AND exp  */
#line 134 "tiger.grm"
                         { (yyval.exp) = make_A_IfExp(to_E_Pos((yylsp[-2])), (yyvsp[-2].exp), (yyvsp[0].exp), make_A_IntExp(to_E_Pos((yylsp[-2])), 0)); }
#line 1694 "y.tab.c"
    break;

  case 34: /* boolean_exp: exp OR exp  */
#line 135 "tiger.grm"
                         { (yyval.exp) = make_A_IfExp(to_E_Pos((yylsp[-2])), (yyvsp[-2].exp), make_A_IntExp(to_E_Pos((yylsp[-2])), 1), (yyvsp[0].exp)); }
#line 1700 "y.tab.c"
    break;

  case 35: /* records: record_list  */
#line 138 "tiger.grm"
                      { (yyval.efieldlist) = (yyvsp[0].efieldlist); }
#line 1706 "y.tab.c"
    break;

  case 36: /* records: %empty  */
#line 139 "tiger.grm"
                      { (yyval.efieldlist) = NULL; }
#line 1712 "y.tab.c"
    break;

  case 37: /* record_list: record  */
#line 141 "tiger.grm"
                      { (yyval.efieldlist) = make_A_EFieldList((yyvsp[0].efield), NULL); }
#line 1718 "y.tab.c"
    break;

  case 38: /* record_list: record_list COMMA record  */
#line 142 "tiger.grm"
                               { (yyval.efieldlist) = make_A_EFieldList((yyvsp[0].efield), (yyvsp[-2].efieldlist)); }
#line 1724 "y.tab.c"
    break;

  case 39: /* record: ID EQ exp  */
#line 144 "tiger.grm"
                      { (yyval.efield) = make_A_EField(make_S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp)); }
#line 1730 "y.tab.c"
    break;

  case 40: /* exp_sequence: exp  */
#line 146 "tiger.grm"
                      { (yyval.explist) = make_A_ExpList((yyvsp[0].exp), NULL); }
#line 1736 "y.tab.c"
    break;

  case 41: /* exp_sequence: exp_sequence SEMICOLON exp  */
#line 147 "tiger.grm"
                                 { (yyval.explist) = make_A_ExpList((yyvsp[0].exp), (yyvsp[-2].explist)); }
#line 1742 "y.tab.c"
    break;

  case 42: /* exp_list: %empty  */
#line 149 "tiger.grm"
                           { (yyval.explist) = NULL; }
#line 1748 "y.tab.c"
    break;

  case 43: /* exp_list: exp_list_nonempty  */
#line 150 "tiger.grm"
                           { (yyval.explist) = (yyvsp[0].explist); }
#line 1754 "y.tab.c"
    break;

  case 44: /* exp_list_nonempty: exp  */
#line 152 "tiger.grm"
                           { (yyval.explist) = make_A_ExpList((yyvsp[0].exp), NULL); }
#line 1760 "y.tab.c"
    break;

  case 45: /* exp_list_nonempty: exp_list_nonempty COMMA exp  */
#line 153 "tiger.grm"
                                  { (yyval.explist) = make_A_ExpList((yyvsp[0].exp), (yyvsp[-2].explist)); }
#line 1766 "y.tab.c"
    break;

  case 46: /* iter: WHILE exp DO exp  */
#line 156 "tiger.grm"
                        { (yyval.exp) = make_A_WhileExp(to_E_Pos((yylsp[-3])), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1772 "y.tab.c"
    break;

  case 47: /* iter: FOR ID ASSIGN exp TO exp DO exp  */
#line 157 "tiger.grm"
                                        { (yyval.exp) = make_A_ForExp(to_E_Pos((yylsp[-7])), make_S_Symbol((yyvsp[-6].sval)), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1778 "y.tab.c"
    break;

  case 48: /* comparison: exp EQ exp  */
#line 159 "tiger.grm"
                          { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_EQ_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1784 "y.tab.c"
    break;

  case 49: /* comparison: exp NEQ exp  */
#line 160 "tiger.grm"
                    { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_NEQ_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1790 "y.tab.c"
    break;

  case 50: /* comparison: exp GT exp  */
#line 161 "tiger.grm"
                    { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_GT_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1796 "y.tab.c"
    break;

  case 51: /* comparison: exp LT exp  */
#line 162 "tiger.grm"
                    { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_LT_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1802 "y.tab.c"
    break;

  case 52: /* comparison: exp GE exp  */
#line 163 "tiger.grm"
                    { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_GE_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1808 "y.tab.c"
    break;

  case 53: /* comparison: exp LE exp  */
#line 164 "tiger.grm"
                    { (yyval.exp) = make_A_OpExp(to_E_Pos((yylsp[-2])), A_LE_OP, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1814 "y.tab.c"
    break;

  case 54: /* dec_seq: dec_seq dec  */
#line 168 "tiger.grm"
                            { (yyval.declist) = make_A_DecList((yyvsp[0].dec), (yyvsp[-1].declist)); }
#line 1820 "y.tab.c"
    break;

  case 55: /* dec_seq: %empty  */
#line 169 "tiger.grm"
                            { (yyval.declist) = NULL; }
#line 1826 "y.tab.c"
    break;

  case 56: /* dec: type_dec_list  */
#line 171 "tiger.grm"
                         { (yyval.dec) = make_A_TypeDecGroup(to_E_Pos((yylsp[0])), (yyvsp[0].typedeclist)); }
#line 1832 "y.tab.c"
    break;

  case 57: /* dec: variable_dec  */
#line 172 "tiger.grm"
                         { (yyval.dec) = (yyvsp[0].dec); }
#line 1838 "y.tab.c"
    break;

  case 58: /* dec: function_dec_list  */
#line 173 "tiger.grm"
                         { (yyval.dec) = make_A_FunctionDecGroup(to_E_Pos((yylsp[0])), (yyvsp[0].fundeclist)); }
#line 1844 "y.tab.c"
    break;

  case 59: /* function_dec_list: function_dec  */
#line 177 "tiger.grm"
                                             { (yyval.fundeclist) = make_A_FunDecList((yyvsp[0].fundec), NULL); }
#line 1850 "y.tab.c"
    break;

  case 60: /* function_dec_list: function_dec function_dec_list  */
#line 178 "tiger.grm"
                                             { (yyval.fundeclist) = make_A_FunDecList((yyvsp[-1].fundec), (yyvsp[0].fundeclist)); }
#line 1856 "y.tab.c"
    break;

  case 61: /* type_dec: TYPE ID EQ type  */
#line 180 "tiger.grm"
                                        { (yyval.typedec) = make_A_TypeDec(make_S_Symbol((yyvsp[-2].sval)), (yyvsp[0].type)); }
#line 1862 "y.tab.c"
    break;

  case 62: /* type_dec_list: type_dec  */
#line 182 "tiger.grm"
                                        { (yyval.typedeclist) = make_A_TypeDecList((yyvsp[0].typedec), NULL); }
#line 1868 "y.tab.c"
    break;

  case 63: /* type_dec_list: type_dec type_dec_list  */
#line 183 "tiger.grm"
                                        { (yyval.typedeclist) = make_A_TypeDecList((yyvsp[-1].typedec), (yyvsp[0].typedeclist)); }
#line 1874 "y.tab.c"
    break;

  case 64: /* type: ID  */
#line 185 "tiger.grm"
                                        { (yyval.type) = make_A_NameType(to_E_Pos((yylsp[0])), make_S_Symbol((yyvsp[0].sval))); }
#line 1880 "y.tab.c"
    break;

  case 65: /* type: LBRACE type_fields RBRACE  */
#line 186 "tiger.grm"
                                        { (yyval.type) = make_A_RecordType(to_E_Pos((yylsp[-2])), (yyvsp[-1].fieldlist)); }
#line 1886 "y.tab.c"
    break;

  case 66: /* type: ARRAY OF ID  */
#line 187 "tiger.grm"
                                        { (yyval.type) = make_A_ArrayType(to_E_Pos((yylsp[-2])), make_S_Symbol((yyvsp[0].sval))); }
#line 1892 "y.tab.c"
    break;

  case 67: /* type_fields: type_field_list  */
#line 189 "tiger.grm"
                                        { (yyval.fieldlist) = (yyvsp[0].fieldlist); }
#line 1898 "y.tab.c"
    break;

  case 68: /* type_fields: %empty  */
#line 191 "tiger.grm"
                    { (yyval.fieldlist) = NULL; }
#line 1904 "y.tab.c"
    break;

  case 69: /* type_field_list: type_field  */
#line 193 "tiger.grm"
                                                        { (yyval.fieldlist) = make_A_FieldList((yyvsp[0].field), NULL); }
#line 1910 "y.tab.c"
    break;

  case 70: /* type_field_list: type_field_list COMMA type_field  */
#line 194 "tiger.grm"
                                                        { (yyval.fieldlist) = make_A_FieldList((yyvsp[0].field), (yyvsp[-2].fieldlist)); }
#line 1916 "y.tab.c"
    break;

  case 71: /* type_field: ID COLON ID  */
#line 196 "tiger.grm"
                            { (yyval.field) = make_A_Field(to_E_Pos((yylsp[-2])), make_S_Symbol((yyvsp[-2].sval)), make_S_Symbol((yyvsp[0].sval))); }
#line 1922 "y.tab.c"
    break;

  case 72: /* variable_dec: VAR ID ASSIGN exp  */
#line 198 "tiger.grm"
                                    { (yyval.dec) = make_A_VarDec(to_E_Pos((yylsp[-3])), make_S_Symbol((yyvsp[-2].sval)), NULL, (yyvsp[0].exp)); }
#line 1928 "y.tab.c"
    break;

  case 73: /* variable_dec: VAR ID COLON ID ASSIGN exp  */
#line 199 "tiger.grm"
                                    { (yyval.dec) = make_A_VarDec(to_E_Pos((yylsp[-5])), make_S_Symbol((yyvsp[-4].sval)), make_S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp)); }
#line 1934 "y.tab.c"
    break;

  case 74: /* function_dec: FUNCTION ID LPAREN type_fields RPAREN EQ exp  */
#line 201 "tiger.grm"
                                                            { (yyval.fundec) = make_A_FunDec(to_E_Pos((yylsp[-6])), make_S_Symbol((yyvsp[-5].sval)), (yyvsp[-3].fieldlist), NULL, (yyvsp[0].exp)); }
#line 1940 "y.tab.c"
    break;

  case 75: /* function_dec: FUNCTION ID LPAREN type_fields RPAREN COLON ID EQ exp  */
#line 202 "tiger.grm"
                                                            { (yyval.fundec) = make_A_FunDec(to_E_Pos((yylsp[-8])), make_S_Symbol((yyvsp[-7].sval)), (yyvsp[-5].fieldlist), make_S_Symbol((yyvsp[-2].sval)), (yyvsp[0].exp)); }
#line 1946 "y.tab.c"
    break;


#line 1950 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 204 "tiger.grm"


void yyerror(char *s) {
    EM_error(to_E_Pos(yylloc), "%s", s);
}

E_Pos to_E_Pos(YYLTYPE pos) {
    return (E_Pos) { pos.first_line, pos.first_column, pos.last_line, pos.last_column };
}
