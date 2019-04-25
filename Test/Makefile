all: comp

myparser-tc.tab.c myparser-tc.tab.h:	myparser-tc.y
	bison -d -v -r all myparser-tc.y

lex.yy.c: ct_p1.l myparser-tc.tab.h
	flex ct_p1.l

comp: lex.yy.c myparser-tc.tab.c myparser-tc.tab.h
	gcc -o mycomp myparser-tc.tab.c lex.yy.c cgen.c -lfl

clean:
	rm mycomp myparser-tc.tab.c lex.yy.c myparser-tc.tab.hz