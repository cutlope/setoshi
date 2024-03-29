%{
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
%}

%token INTEGER
%token BOOLEAN
%token CHAR
%token FLOAT
%token STRING
%token TRUE
%token FALSE
%token POINT
%token INTEGER_VALUE
%token FLOAT_VALUE
%token L_CB
%token R_CB
%token L_PR
%token R_PR
%token COMMA
%token DIVISION_OPERATOR
%token MULTIPLICATION_OPERATOR
%token ADDITION_OPERATOR
%token SUBTRACTION_OPERATOR
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
%token INCLUSION_SET
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
%token RETURN
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
    START_PROGRAM L_CB statements R_CB END_PROGRAM

statements:
    statement
    | statement statements

statement :
        comment
        | loop
        | expr
        | conditional
        | function_new
        | io_opr
        | set_expr
        | function_call
	| return

form :
    INTEGER
    | BOOLEAN
    | CHAR
    | FLOAT

float :
    FLOAT_VALUE

operator :
    DIVISION_OPERATOR
    | MULTIPLICATION_OPERATOR
    | ADDITION_OPERATOR
    | SUBTRACTION_OPERATOR

expr :
    set_element operator set_element
    | IDENTIFIER EQUALS_TO expr
    | IDENTIFIER EQUALS_TO set_element
    | IDENTIFIER comparator IDENTIFIER
    | IDENTIFIER EQUALS_TO io_opr
    | IDENTIFIER EQUALS_TO set_opr
    | form IDENTIFIER EQUALS_TO IDENTIFIER

comparator :
    AND | OR | LT
    | GT | LTE | GTE
    | IS_EQUAL | IS_EQUAL_STRICT | IS_NOT_EQUAL
    | IS_NOT_EQUAL_STRICT

foreach_expr :
    IDENTIFIER AS IDENTIFIER

conditional :
    if

if :
    IF L_PR expr R_PR L_CB statements R_CB ELSE L_CB statements R_CB
    | IF L_PR function_call R_PR L_CB statements R_CB ELSE L_CB statements R_CB
    | IF L_PR set_opr R_PR L_CB statements R_CB ELSE L_CB statements R_CB
loop :
    while_loop | foreach_loop

while_loop :
    WHILE L_PR expr R_PR L_CB statements R_CB

foreach_loop :
    FOREACH L_PR foreach_expr R_PR L_CB statements R_CB

function_name :
    IDENTIFIER

params :
    set_element
    | set_element COMMA params

function_new :
    FUNCTION function_name L_PR params R_PR L_CB statements R_CB

function_call :
    function_name L_PR params R_PR

return :
    RETURN IDENTIFIER

comment :
    COMMENT_START IDENTIFIER COMMENT_END

set :
    L_CB set_elements R_CB

set_opr :
    set
    | set_union
    | set_intersection
    | set_inclusion
    | is_superset
    | is_subset
    | is_emptyset
    | is_equalset

set_expr :
    set_del
    | set_add
    | set_remove

set_elements :
    set_element
    | set_element COMMA set_elements

set_element :
    IDENTIFIER
    | float
    | INTEGER_VALUE

set_del :
    DELETE_SET L_PR IDENTIFIER R_PR

set_add :
    ADD_TO_SET L_PR set_element COMMA IDENTIFIER R_PR

set_remove :
    REMOVE_FROM_SET L_PR set_element COMMA IDENTIFIER R_PR

set_union  :
    UNION_SET L_PR  IDENTIFIER COMMA IDENTIFIER R_PR

set_intersection  :
    INTERSECTION_SET L_PR IDENTIFIER COMMA IDENTIFIER R_PR

set_inclusion :
    INCLUSION_SET L_PR set_element COMMA IDENTIFIER R_PR

is_superset :
    SUPERSET L_PR IDENTIFIER R_PR

is_subset :
    SUBSET L_PR IDENTIFIER R_PR

is_emptyset :
    EMPTYSET L_PR IDENTIFIER R_PR

is_equalset :
    EQUALSET L_PR IDENTIFIER R_PR

file_path :
    IDENTIFIER

io_opr :
    read_file
    | write_file
    | input
    | output

read_file :
    READ_FILE L_PR file_path R_PR

write_file :
    WRITE_FILE L_PR file_path R_PR

input :
    INPUT read_file

output :
    OUTPUT IDENTIFIER
    | OUTPUT  INTEGER_VALUE
    | OUTPUT  set

%%

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
