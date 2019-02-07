
rename: rename.o
	gcc rename.o -o rename

rename.o: rename.c
	gcc -c rename.c

clean:
	rm rename.o
