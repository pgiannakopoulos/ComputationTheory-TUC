all: comp

myparser-tc.tab.c myparser-tc.tab.h:	myparser-tc.y
	bison -d -v -r all myparser-tc.y

lex.yy.c: mylexer-tc.l myparser-tc.tab.h
	flex mylexer-tc.l

comp: lex.yy.c myparser-tc.tab.c myparser-tc.tab.h
	gcc -o mycompiler myparser-tc.tab.c lex.yy.c cgen.c -lfl

clean:
	rm mycompiler myparser-tc.tab.c lex.yy.c myparser-tc.tab.h myparser-tc.output
	rm mytest1 mytest2 mytest3 mytest4 mytest5 correct1.c correct2.c protoi.c prime.c useless.c

testc: comp
	./mycompiler < inputs/correct1.tc > correct1.c
	gcc -o mytest1 -std=c99 -Wall correct1.c
	./mycompiler < inputs/correct2.tc > correct2.c
	gcc -o mytest2 -std=c99 -Wall correct2.c

testw: comp
	./mycompiler < inputs/wrong1.tc
	./mycompiler < inputs/wrong2.tc

test_std: comp
	./mycompiler < inputs/protoi.tc > protoi.c
	gcc -o mytest3 -std=c99 -Wall protoi.c
	./mycompiler < inputs/prime.tc > prime.c
	gcc -o mytest4 -std=c99 -Wall prime.c
	./mycompiler < inputs/useless.tc > useless.c
	gcc -o mytest5 -std=c99 -Wall useless.c
