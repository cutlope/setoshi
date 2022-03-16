parser: lex.yy.c y.tab.c
	gcc -o parser y.tab.c
y.tab.c: setoshi.y
	yacc setoshi.y
lex.yy.c: setoshi.l
	lex setoshi.l
clean:
	rm -f lex.yy.c y.tab.c setoshi
