#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "setoshi.y"
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
#line 23 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INTEGER 257
#define BOOLEAN 258
#define CHAR 259
#define FLOAT 260
#define STRING 261
#define TRUE 262
#define FALSE 263
#define POINT 264
#define INTEGER_VALUE 265
#define FLOAT_VALUE 266
#define L_CB 267
#define R_CB 268
#define L_PR 269
#define R_PR 270
#define COMMA 271
#define DIVISION_OPERATOR 272
#define MULTIPLICATION_OPERATOR 273
#define ADDITION_OPERATOR 274
#define SUBTRACTION_OPERATOR 275
#define AND 276
#define OR 277
#define LT 278
#define GT 279
#define LTE 280
#define GTE 281
#define EQUALS_TO 282
#define IS_EQUAL 283
#define IS_EQUAL_STRICT 284
#define IS_NOT_EQUAL 285
#define IS_NOT_EQUAL_STRICT 286
#define COMMENT_START 287
#define COMMENT_END 288
#define DELETE_SET 289
#define ADD_TO_SET 290
#define REMOVE_FROM_SET 291
#define UNION_SET 292
#define INTERSECTION_SET 293
#define INCLUSION_SET 294
#define SUPERSET 295
#define EMPTYSET 296
#define EQUALSET 297
#define READ_FILE 298
#define WRITE_FILE 299
#define INPUT 300
#define OUTPUT 301
#define IF 302
#define ELSE 303
#define WHILE 304
#define FOREACH 305
#define FUNCTION 306
#define RETURN 307
#define END_PROGRAM 308
#define IDENTIFIER 309
#define COMMENT 310
#define START_PROGRAM 311
#define SUBSET 312
#define AS 313
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    3,   13,   13,   13,   13,   14,   15,   15,
   15,   15,    6,    6,    6,    6,    6,    6,    6,   17,
   17,   17,   17,   17,   17,   17,   17,   17,   17,   19,
    7,   20,   20,   20,    5,    5,   21,   22,   23,   24,
   24,    8,   11,   12,    4,   25,   18,   18,   18,   18,
   18,   18,   18,   18,   10,   10,   10,   26,   26,   16,
   16,   16,   34,   35,   36,   27,   28,   29,   30,   31,
   32,   33,   37,    9,    9,    9,    9,   38,   39,   40,
   41,   41,   41,
};
static const short yylen[] = {                            2,
    1,    5,    1,    2,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    3,    3,    3,    3,    3,    3,    4,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    3,
    1,   11,   11,   11,    1,    1,    7,    7,    1,    1,
    3,    8,    4,    2,    3,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    3,    1,
    1,    1,    4,    6,    6,    6,    6,    6,    4,    4,
    4,    4,    1,    1,    1,    1,    1,    4,    4,    2,
    2,    2,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    1,    0,   14,   15,   16,   17,   72,   18,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    5,    6,    7,    8,
    9,   10,   11,   12,   13,    0,   71,    0,   41,   45,
   46,    0,   65,   66,   67,   84,   85,   86,   87,    0,
    0,    0,    0,    0,    0,   90,   92,    0,   91,   93,
    0,    0,    0,   49,    0,   54,   30,   31,   32,   33,
   34,   35,    0,   36,   37,   38,   39,    0,    0,    4,
    0,   19,   20,   21,   22,    0,    0,   55,    0,   70,
    0,    0,   83,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   57,   58,   59,
   60,   61,   62,   63,   64,    0,    0,    0,    0,    0,
   24,   27,    0,   28,   26,    2,    0,   23,    0,    0,
   73,    0,    0,   88,   89,    0,   56,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   29,    0,   53,    0,    0,   69,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   40,    0,
    0,   51,   74,   75,    0,    0,    0,   79,   81,   82,
   80,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   47,   48,    0,   76,   77,   78,    0,
    0,    0,   52,    0,    0,    0,    0,    0,    0,   42,
   43,   44,
};
static const short yydgoto[] = {                          2,
    3,   25,   26,   27,   28,   29,   30,   31,   32,   33,
   34,   35,   36,   37,   86,   38,   78,  107,  119,   39,
   40,   41,   42,  130,  108,   97,  109,  110,  111,  112,
  113,  114,  115,   43,   44,   45,   94,   46,   47,   48,
   49,
};
static const short yysindex[] = {                      -302,
 -247,    0,    0,  -47,    0,    0,    0,    0,    0,    0,
 -286, -238, -232, -216, -204, -203, -231, -257, -201, -199,
 -198, -236, -235,  -56, -193,  -47,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -225,    0, -258,    0,    0,
    0, -191,    0,    0,    0,    0,    0,    0,    0, -202,
 -222, -237, -237, -221, -221,    0,    0, -237,    0,    0,
 -233, -209, -219,    0, -178,    0,    0,    0,    0,    0,
    0,    0, -254,    0,    0,    0,    0, -217, -215,    0,
 -188,    0,    0,    0,    0, -237, -237,    0, -175,    0,
 -174, -173,    0, -171, -169, -168, -172, -161, -160, -159,
 -158, -155, -151, -146, -154, -145, -144,    0,    0,    0,
    0,    0,    0,    0,    0,  -56, -143, -189, -142, -237,
    0,    0, -258,    0,    0,    0, -180,    0, -141, -139,
    0, -177, -176,    0,    0, -237,    0, -166, -147, -237,
 -140, -138, -137, -136, -132, -117, -112, -104, -135, -103,
  -95,    0, -237,    0,  -94,  -93,    0,  -90,  -89,  -88,
  -86,  -85,  -84,  -82,  -47,  -47,  -47,  -47,    0,  -47,
  -75,    0,    0,    0, -116, -115, -114,    0,    0,    0,
    0, -101,  -72,  -71,  -65,  -60,  -47,  -55,  -54,  -53,
  -70,  -69,  -68,    0,    0,  -37,    0,    0,    0,  -35,
  -31,  -30,    0,  -47,  -47,  -47,  -29,  -27,  -23,    0,
    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -192,    0,  -22,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -21,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -153,    0,    0,    0,    0,
    0,    0, -100,    0,    0,    0,    0,    0,  -32,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
    0,  -26,    0,    0,    0,  -43,    0,    0,  141,    0,
  187,    0,    0,    0,    0,  -51,    0,  176,    0,    0,
    0,    0,  228,  -99,  238,  125,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  208,  247,    0,    0,
    0,
};
#define YYTABLESIZE 264
static const short yytable[] = {                         80,
   91,   92,    5,    6,    7,    8,   96,   57,    1,   58,
    9,   10,   58,   82,   83,   84,   85,  105,  117,    4,
  151,  123,   50,    5,    6,    7,    8,    9,   10,  121,
   51,    9,   10,   58,  128,  129,   52,   98,   99,  100,
  101,  102,  103,   15,   16,   17,   18,    5,    6,    7,
    8,   59,   53,  172,  116,    9,   10,  104,   98,   99,
  100,  101,  102,  103,   54,   55,   15,   61,  129,   62,
   63,   90,   64,   66,   79,   24,   49,   87,  104,   70,
   70,   70,   70,   81,   96,   88,   89,   93,  160,  118,
  120,  125,  126,  127,  131,  137,  132,  133,  134,  116,
  135,  129,  136,   70,   70,   70,   70,  138,  139,  140,
  141,   70,   70,  142,   70,  145,   70,  143,   70,   70,
   70,   70,  144,  149,  146,  147,  148,  150,  152,  153,
  154,  155,  156,   70,  165,   70,   70,   70,  182,  183,
  184,  185,  158,  186,   70,   70,   70,   70,   70,  166,
   70,   70,   70,   70,  167,   70,   25,   25,   25,   25,
  196,  159,  168,  170,   25,   25,  191,   25,  161,   25,
  162,  163,  164,  169,  171,  173,  174,  207,  208,  209,
  175,  176,  177,  178,  179,  180,   25,  181,   25,   25,
   25,  187,  188,  189,  190,  192,  193,   25,   25,   25,
   25,   25,  194,   25,   25,   25,   25,  195,   25,    5,
    6,    7,    8,  122,  197,  198,  199,    9,   10,   67,
   68,   69,   70,   71,   72,   73,   74,   75,   76,   77,
  203,  204,  200,  201,  202,  205,  206,   50,  210,   11,
  211,   12,   13,   14,  212,    3,   68,  106,  124,   65,
   15,   16,   17,   18,   19,   60,   20,   21,   22,   23,
  157,   24,   95,   56,
};
static const short yycheck[] = {                         26,
   52,   53,  257,  258,  259,  260,   58,  265,  311,  267,
  265,  266,  267,  272,  273,  274,  275,   61,   62,  267,
  120,   73,  309,  257,  258,  259,  260,  265,  266,   73,
  269,  265,  266,  267,   86,   87,  269,  292,  293,  294,
  295,  296,  297,  298,  299,  300,  301,  257,  258,  259,
  260,  309,  269,  153,  309,  265,  266,  312,  292,  293,
  294,  295,  296,  297,  269,  269,  298,  269,  120,  269,
  269,  309,  309,  309,  268,  309,  269,  269,  312,  272,
  273,  274,  275,  309,  136,  288,  309,  309,  140,  309,
  269,  309,  308,  282,  270,  268,  271,  271,  270,  309,
  270,  153,  271,  257,  258,  259,  260,  269,  269,  269,
  269,  265,  266,  269,  268,  270,  270,  269,  272,  273,
  274,  275,  269,  313,  270,  270,  270,  270,  309,  271,
  270,  309,  309,  287,  267,  289,  290,  291,  165,  166,
  167,  168,  309,  170,  298,  299,  300,  301,  302,  267,
  304,  305,  306,  307,  267,  309,  257,  258,  259,  260,
  187,  309,  267,  267,  265,  266,  268,  268,  309,  270,
  309,  309,  309,  309,  270,  270,  270,  204,  205,  206,
  271,  271,  271,  270,  270,  270,  287,  270,  289,  290,
  291,  267,  309,  309,  309,  268,  268,  298,  299,  300,
  301,  302,  268,  304,  305,  306,  307,  268,  309,  257,
  258,  259,  260,   73,  270,  270,  270,  265,  266,  276,
  277,  278,  279,  280,  281,  282,  283,  284,  285,  286,
  268,  267,  303,  303,  303,  267,  267,  270,  268,  287,
  268,  289,  290,  291,  268,  268,  268,   61,   73,   22,
  298,  299,  300,  301,  302,   18,  304,  305,  306,  307,
  136,  309,   55,   17,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 313
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INTEGER","BOOLEAN","CHAR",
"FLOAT","STRING","TRUE","FALSE","POINT","INTEGER_VALUE","FLOAT_VALUE","L_CB",
"R_CB","L_PR","R_PR","COMMA","DIVISION_OPERATOR","MULTIPLICATION_OPERATOR",
"ADDITION_OPERATOR","SUBTRACTION_OPERATOR","AND","OR","LT","GT","LTE","GTE",
"EQUALS_TO","IS_EQUAL","IS_EQUAL_STRICT","IS_NOT_EQUAL","IS_NOT_EQUAL_STRICT",
"COMMENT_START","COMMENT_END","DELETE_SET","ADD_TO_SET","REMOVE_FROM_SET",
"UNION_SET","INTERSECTION_SET","INCLUSION_SET","SUPERSET","EMPTYSET","EQUALSET",
"READ_FILE","WRITE_FILE","INPUT","OUTPUT","IF","ELSE","WHILE","FOREACH",
"FUNCTION","RETURN","END_PROGRAM","IDENTIFIER","COMMENT","START_PROGRAM",
"SUBSET","AS",
};
static const char *yyrule[] = {
"$accept : program",
"program : main",
"main : START_PROGRAM L_CB statements R_CB END_PROGRAM",
"statements : statement",
"statements : statement statements",
"statement : comment",
"statement : loop",
"statement : expr",
"statement : conditional",
"statement : function_new",
"statement : io_opr",
"statement : set_expr",
"statement : function_call",
"statement : return",
"form : INTEGER",
"form : BOOLEAN",
"form : CHAR",
"form : FLOAT",
"float : FLOAT_VALUE",
"operator : DIVISION_OPERATOR",
"operator : MULTIPLICATION_OPERATOR",
"operator : ADDITION_OPERATOR",
"operator : SUBTRACTION_OPERATOR",
"expr : set_element operator set_element",
"expr : IDENTIFIER EQUALS_TO expr",
"expr : IDENTIFIER EQUALS_TO set_element",
"expr : IDENTIFIER comparator IDENTIFIER",
"expr : IDENTIFIER EQUALS_TO io_opr",
"expr : IDENTIFIER EQUALS_TO set_opr",
"expr : form IDENTIFIER EQUALS_TO IDENTIFIER",
"comparator : AND",
"comparator : OR",
"comparator : LT",
"comparator : GT",
"comparator : LTE",
"comparator : GTE",
"comparator : IS_EQUAL",
"comparator : IS_EQUAL_STRICT",
"comparator : IS_NOT_EQUAL",
"comparator : IS_NOT_EQUAL_STRICT",
"foreach_expr : IDENTIFIER AS IDENTIFIER",
"conditional : if",
"if : IF L_PR expr R_PR L_CB statements R_CB ELSE L_CB statements R_CB",
"if : IF L_PR function_call R_PR L_CB statements R_CB ELSE L_CB statements R_CB",
"if : IF L_PR set_opr R_PR L_CB statements R_CB ELSE L_CB statements R_CB",
"loop : while_loop",
"loop : foreach_loop",
"while_loop : WHILE L_PR expr R_PR L_CB statements R_CB",
"foreach_loop : FOREACH L_PR foreach_expr R_PR L_CB statements R_CB",
"function_name : IDENTIFIER",
"params : set_element",
"params : set_element COMMA params",
"function_new : FUNCTION function_name L_PR params R_PR L_CB statements R_CB",
"function_call : function_name L_PR params R_PR",
"return : RETURN IDENTIFIER",
"comment : COMMENT_START IDENTIFIER COMMENT_END",
"set : L_CB set_elements R_CB",
"set_opr : set",
"set_opr : set_union",
"set_opr : set_intersection",
"set_opr : set_inclusion",
"set_opr : is_superset",
"set_opr : is_subset",
"set_opr : is_emptyset",
"set_opr : is_equalset",
"set_expr : set_del",
"set_expr : set_add",
"set_expr : set_remove",
"set_elements : set_element",
"set_elements : set_element COMMA set_elements",
"set_element : IDENTIFIER",
"set_element : float",
"set_element : INTEGER_VALUE",
"set_del : DELETE_SET L_PR IDENTIFIER R_PR",
"set_add : ADD_TO_SET L_PR set_element COMMA IDENTIFIER R_PR",
"set_remove : REMOVE_FROM_SET L_PR set_element COMMA IDENTIFIER R_PR",
"set_union : UNION_SET L_PR IDENTIFIER COMMA IDENTIFIER R_PR",
"set_intersection : INTERSECTION_SET L_PR IDENTIFIER COMMA IDENTIFIER R_PR",
"set_inclusion : INCLUSION_SET L_PR set_element COMMA IDENTIFIER R_PR",
"is_superset : SUPERSET L_PR IDENTIFIER R_PR",
"is_subset : SUBSET L_PR IDENTIFIER R_PR",
"is_emptyset : EMPTYSET L_PR IDENTIFIER R_PR",
"is_equalset : EQUALSET L_PR IDENTIFIER R_PR",
"file_path : IDENTIFIER",
"io_opr : read_file",
"io_opr : write_file",
"io_opr : input",
"io_opr : output",
"read_file : READ_FILE L_PR file_path R_PR",
"write_file : WRITE_FILE L_PR file_path R_PR",
"input : INPUT read_file",
"output : OUTPUT IDENTIFIER",
"output : OUTPUT INTEGER_VALUE",
"output : OUTPUT set",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 238 "setoshi.y"

#include "lex.yy.c"

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s\n", yylineno, s);
}

int main() {
    yyparse();
    if(yynerrs < 1){
		    printf("Input program is valid 🍇🍇 \n");
	}
    return 0;
 }
#line 459 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
