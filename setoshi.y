%token INTEGER
%token BOOLEAN
%token CHAR
%token FLOAT
%token STRING
%token TRUE
%token FALSE
%token POINT
%token LOWERCASE
%token UPPERCASE
%token CHAR_VALUE
%token INTEGER_VALUE
%token NUMBER_VALUE
%token FLOAT_VALUE
%token SIGN
%token L_CB
%token R_CB
%token L_PR
%token R_PR
%token COMMA
%token DIVISION_OPERATOR
%token MULTIPLICATION_OPERATOR
%token AND
%token OR
%token LT
%token GT
%token LTE
%token GTE
%token EQUALS_TO
%token IS_EQUAL
%token IS_EQUAL_STRICT
%token IS_NOT_EQUAL
%token IS_NOT_EQUAL_STRICT
%token COMMENT_START
%token COMMENT_END
%token DELETE_SET
%token ADD_TO_SET
%token REMOVE_FROM_SET
%token UNION_SET
%token INTERSECTION_SET
%token SUPERSET
%token EMPTYSET
%token EQUALSET
%token READ_FILE
%token WRITE_FILE
%token INPUT
%token OUTPUT
%token IF
%token ELSE
%token WHILE
%token FOREACH
%token FUNCTION
%token END_PROGRAM
%token IDENTIFIER
%token COMMENT
%token START_PROGRAM
%token SUBSET
%token AS

%%

program:
     main

main:
    statements

statements:
    statement
    | statement statements

statement :
        COMMENT
        | loop
        | expr
        | conditional
        | FUNCTION

form :
    INTEGER
    | bool
    | CHAR
    | float
    | string

number :
    INTEGER_VALUE
    | INTEGER_VALUE number

float :
    number POINT number

bool :
    TRUE
    | FALSE

string :
    CHAR
    | CHAR string

var_new :
    form identifier

identifier :
    string
    | string identifier
    | string number
    | string number identifier

assign :
    identifier EQUALS_TO expr

assign_new :
    var_new EQUALS_TO expr

operator :
    DIVISION_OPERATOR
    | MULTIPLICATION_OPERATOR
    | SIGN

expr :
    identifier operator identifier
    | identifier comparator identifier

comparator :
    AND | OR | LT
    | GT | LTE | GTE
    | IS_EQUAL | IS_EQUAL_STRICT | IS_NOT_EQUAL
    | IS_NOT_EQUAL_STRICT

foreach_expr :
    identifier AS var_new

conditional :
    if

if :
    matched_if | unmatched_if

matched_if :
    if expr L_CB statements R_CB ELSE L_CB matched_if R_CB

unmatched_if :
    if expr L_CB matched_if R_CB ELSE L_CB unmatched_if R_CB

loop :
    while_loop | foreach_loop

while_loop :
    WHILE L_PR expr R_PR L_CB statements R_CB

foreach_loop :
    FOREACH L_PR foreach_expr R_PR L_CB statements R_CB

function_name :
    identifier

params :
    var_new
    | params

function_new :
    FUNCTION function_name L_PR params R_PR L_CB statements R_CB

function_call :
    function_name L_PR params R_PR

comment :
    COMMENT_START string COMMENT_START

set :
    L_CB set_elements R_CB

set_elements :
    set_element | set_element set_elements

set_element :
    INTEGER | CHAR | string

set_new :
    identifier EQUALS_TO set

set_del :
    DELETE_SET L_PR identifier R_PR

set_add :
    ADD_TO_SET L_PR set_elements COMMA identifier R_PR

set_remove :
    REMOVE_FROM_SET L_PR set_elements COMMA identifier R_PR

set_union  :
    UNION_SET L_PR  identifier COMMA identifier R_PR

set_intersection  :
    INTERSECTION_SET L_PR identifier COMMA identifier R_PR

is_superset :
    SUPERSET L_PR identifier R_PR

is_subset :
    SUBSET L_PR identifier R_PR

is_emptyset :
    EMPTYSET L_PR identifier R_PR

is_equalset :
    EQUALSET L_PR identifier R_PR

file_path :
    string

read_file :
    READ_FILE L_PR file_path R_PR

write_file :
    WRITE_FILE L_PR file_path R_PR

input :
    INPUT read_file

output :
    OUTPUT identifier
    | OUTPUT  string
    | OUTPUT  INTEGER
    | OUTPUT  set

%%

#include "lex.yy.c"
main() {
   return yyparse();
 }
int yyerror( char *s ) { fprintf( stderr, "%s\n", s); }
