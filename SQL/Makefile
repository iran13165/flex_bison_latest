all:
	lex sql.l  
	yacc -d sql.y   
	cc -c -g lex.yy.c y.tab.c 
	cc -o out -g lex.yy.o y.tab.o -ll
clean:
	rm out
	rm lex.yy.o
	rm y.tab.c
	rm y.tab.h
	rm y.tab.o
	rm lex.yy.c