# Build static lib
build: rollinghash.o utils.o
	ar -cvq ./build/rh.a rollinghash.o utils.o
rollinghash.o: ./src/rollinghash.c
	gcc -Wall -c ./src/rollinghash.c
utils.o: ./src/tools/utils.c
	gcc -Wall -c ./src/tools/utils.c
clean:
	rm -f *.o ./build/rh.a