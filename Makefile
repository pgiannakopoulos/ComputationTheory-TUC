all: comp

myparser-tc.tab.c myparser-tc.tab.h:	myparser-tc.y
	bison -d -v -r all myparser-tc.y

lex.yy.c: mylexer-tc.l myparser-tc.tab.h
	flex mylexer-tc.l

comp: lex.yy.c myparser-tc.tab.c myparser-tc.tab.h
	gcc -o mycomp myparser-tc.tab.c lex.yy.c cgen.c -lfl

clean:
	rm mycomp myparser-tc.tab.c lex.yy.c myparser-tc.tab.h myparser-tc.output

test:
	./mycomp < inputs/protoi.tc > myTestProg.c
	gcc -o mytest1 -std=c99 -Wall myTestProg.c
	./mycomp < inputs/correct1.tc > correct1.c
	gcc -o mytest2 -std=c99 -Wall correct1.c
	./mycomp < inputs/correct2.tc > correct2.c
	gcc -o mytest3 -std=c99 -Wall correct2.c

clean_test:
	rm mytest1 mytest2 mytest3 myTestProg.c correct1.c correct2.c