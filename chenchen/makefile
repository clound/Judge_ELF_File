all:text test clean
test:test.o 
	gcc -o test test.o
text:text.o
	gcc -o text text.o
test.o: test.c
	gcc -c test.c
text.o: text.c
	gcc -c text.c
clean:
	rm test.o text.o
