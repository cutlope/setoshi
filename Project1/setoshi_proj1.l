%option main
INTEGER int
BOOLEAN bool
CHAR char
FLOAT float
STRING string
TRUE true
FALSE false
POINT \.
LOWERCASE [a-z]
UPPERCASE [A-Z]
CHAR_VALUE [a-zA-z]
INTEGER_VALUE [0-9]
NUMBER_VALUE {INTEGER_VALUE}+
FLOAT_VALUE {INTEGER_VALUE}+\.{INTEGER_VALUE}+
SIGN [+-]
L_CB \{
R_CB \}
L_PR \(
R_PR \)
COMMA \,
DIVISION_OPERATOR \/
MULTIPLICATION_OPERATOR \*
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
START_PROGRAM "start"
END_PROGRAM "end"
IDENTIFIER [a-zA-Z0-9_]+
COMMENT {COMMENT_START}{IDENTIFIER}{COMMENT_END}
%%
{INTEGER} printf("INTEGER");
{BOOLEAN} printf("BOOLEAN");
{CHAR} printf("CHAR");
{FLOAT} printf("FLOAT");
{STRING} printf("STRING");
{TRUE} printf("TRUE");
{FALSE} printf("FALSE");
{POINT} printf("POINT");
{LOWERCASE} printf("LOWERCASE");
{UPPERCASE} printf("UPPERCASE");
{CHAR_VALUE} printf("CHAR_VALUE");
{INTEGER_VALUE} printf("INTEGER_VALUE");
{NUMBER_VALUE} printf("NUMBER_VALUE");
{FLOAT_VALUE} printf("FLOAT_VALUE");
{SIGN} printf("SIGN");
{L_CB} printf("L_CB");
{R_CB} printf("R_CB");
{L_PR} printf("L_PR");
{R_PR} printf("R_PR");
{COMMA} printf("COMMA");
{DIVISION_OPERATOR} printf("DIVISION_OPERATOR");
{MULTIPLICATION_OPERATOR} printf("MULTIPLICATION_OPERATOR");
{AND} printf("AND");
{OR} printf("OR");
{LT} printf("LT");
{GT} printf("GT");
{LTE} printf("LTE");
{GTE} printf("GTE");
{EQUALS_TO} printf("EQUALS_TO");
{IS_EQUAL} printf("IS_EQUAL");
{IS_EQUAL_STRICT} printf("IS_EQUAL_STRICT");
{IS_NOT_EQUAL} printf("IS_NOT_EQUAL");
{IS_NOT_EQUAL_STRICT} printf("IS_NOT_EQUAL_STRICT");
{COMMENT_START} printf("COMMENT_START");
{COMMENT_END} printf("COMMENT_END");
{DELETE_SET} printf("DELETE_SET");
{ADD_TO_SET} printf("ADD_TO_SET");
{REMOVE_FROM_SET} printf("REMOVE_FROM_SET");
{UNION_SET} printf("UNION_SET");
{INTERSECTION_SET} printf("INTERSECTION_SET");
{SUPERSET} printf("SUPERSET");
{EMPTYSET} printf("EMPTYSET");
{EQUALSET} printf("EQUALSET");
{READ_FILE} printf("READ_FILE");
{WRITE_FILE} printf("WRITE_FILE");
{INPUT} printf("INPUT");
{OUTPUT} printf("OUTPUT");
{IF} printf("IF");
{ELSE} printf("ELSE");
{WHILE} printf("WHILE");
{FOREACH} printf("FOREACH");
{FUNCTION} printf("FUNCTION");
{START_PROGRAM} printf("START_PROGRAM");
{END_PROGRAM} printf("END_PROGRAM");
{IDENTIFIER} printf("IDENTIFIER");
{COMMENT} printf("COMMENT");
