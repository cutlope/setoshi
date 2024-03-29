%option yylineno

INTEGER int
BOOLEAN bool
CHAR char
FLOAT float
IDENTIFIER [a-zA-Z0-9_]+
STRING {CHAR}+
TRUE true
FALSE false
POINT \.
INTEGER_VALUE [0-9]
FLOAT_VALUE [+-]?{INTEGER_VALUE}+\.{INTEGER_VALUE}+
L_CB \{
R_CB \}
L_PR \(
R_PR \)
COMMA \,
DIVISION_OPERATOR \/
MULTIPLICATION_OPERATOR \*
ADDITION_OPERATOR \+
SUBTRACTION_OPERATOR \-
AND \&\&
OR \|\|
LT \<
GT \>
LTE \<\=
GTE \>\=
EQUALS_TO \=
IS_EQUAL \=\=
IS_EQUAL_STRICT \=\=\=
IS_NOT_EQUAL \!\=
IS_NOT_EQUAL_STRICT \!\=\=
COMMENT_START \/\*
COMMENT_END \*\/
DELETE_SET "delete_set"
ADD_TO_SET "add_to_set"
REMOVE_FROM_SET "remove_from_set"
UNION_SET "union"
INTERSECTION_SET "intersection"
SUPERSET "superset"
SUBSET "subset"
EMPTYSET "emptyset"
EQUALSET "equalset"
READ_FILE "read"
WRITE_FILE "write"
INPUT "in"
OUTPUT "out"
IF "if"
ELSE "else"
WHILE "while"
FOREACH "foreach"
AS "as"
FUNCTION "function"
RETURN "return"
START_PROGRAM "start"
END_PROGRAM "end"
COMMENT {COMMENT_START}{STRING}{COMMENT_END}


%%
{INTEGER} return (INTEGER);
{BOOLEAN} return (BOOLEAN);
{CHAR} return (CHAR);
{FLOAT} return (FLOAT);
{STRING} return (STRING);
{TRUE} return (TRUE);
{FALSE} return (FALSE);
{POINT} return (POINT);
{INTEGER_VALUE} return (INTEGER_VALUE);
{FLOAT_VALUE} return (FLOAT_VALUE);
{L_CB} return (L_CB);
{R_CB} return (R_CB);
{L_PR} return (L_PR);
{R_PR} return (R_PR);
{COMMA} return (COMMA);
{DIVISION_OPERATOR} return (DIVISION_OPERATOR);
{MULTIPLICATION_OPERATOR} return (MULTIPLICATION_OPERATOR);
{ADDITION_OPERATOR} return (ADDITION_OPERATOR);
{SUBTRACTION_OPERATOR} return (SUBTRACTION_OPERATOR);
{AND} return (AND);
{OR} return (OR);
{LT} return (LT);
{GT} return (GT);
{LTE} return (LTE);
{GTE} return (GTE);
{EQUALS_TO} return (EQUALS_TO);
{IS_EQUAL} return (IS_EQUAL);
{IS_EQUAL_STRICT} return (IS_EQUAL_STRICT);
{IS_NOT_EQUAL} return (IS_NOT_EQUAL);
{IS_NOT_EQUAL_STRICT} return (IS_NOT_EQUAL_STRICT);
{COMMENT_START} return (COMMENT_START);
{COMMENT_END} return (COMMENT_END);
{DELETE_SET} return (DELETE_SET);
{ADD_TO_SET} return (ADD_TO_SET);
{REMOVE_FROM_SET} return (REMOVE_FROM_SET);
{UNION_SET} return (UNION_SET);
{INTERSECTION_SET} return (INTERSECTION_SET);
{SUPERSET} return (SUPERSET);
{EMPTYSET} return (EMPTYSET);
{EQUALSET} return (EQUALSET);
{READ_FILE} return (READ_FILE);
{WRITE_FILE} return (WRITE_FILE);
{INPUT} return (INPUT);
{OUTPUT} return (OUTPUT);
{IF} return (IF);
{ELSE} return (ELSE);
{WHILE} return (WHILE);
{FOREACH} return (FOREACH);
{FUNCTION} return (FUNCTION);
{RETURN} return (RETURN);
{AS} return (AS);
{SUBSET} return (SUBSET);
{START_PROGRAM} return (START_PROGRAM);
{END_PROGRAM} return (END_PROGRAM);
{IDENTIFIER} return (IDENTIFIER);
{COMMENT} return (COMMENT);
[ \t\n]  ;
%%

int yywrap() { return (1); }
