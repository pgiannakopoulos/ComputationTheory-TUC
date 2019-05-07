all: comp

myparser-tc.tab.c myparser-tc.tab.h:	myparser-tc.y
	bison -d -v -r all myparser-tc.y

lex.yy.c: mylexer-tc.l myparser-tc.tab.h
	flex mylexer-tc.l

comp: lex.yy.c myparser-tc.tab.c myparser-tc.tab.h
	gcc -o mycompiler myparser-tc.tab.c lex.yy.c cgen.c -lfl

clean:
	rm mycompiler myparser-tc.tab.c lex.yy.c myparser-tc.tab.h myparser-tc.output

test:
	./mycompiler: < inputs/protoi.tc > myTestProg.c
	gcc -o mytest0 -std=c99 -Wall myTestProg.c
	./mycompiler: < inputs/correct1.tc > correct1.c
	gcc -o mytest1 -std=c99 -Wall correct1.c
	./mycompiler: < inputs/correct2.tc > correct2.c
	gcc -o mytest2 -std=c99 -Wall correct2.c

clean_test:
	rm mytest0 mytest1 mytest2 myTestProg.c correct1.c correct2.c