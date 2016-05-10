# Build static lib
build: rollinghash.o utils.o
	ar -cvq ./build/rh.a rollinghash.o utils.o
rollinghash.o: ./src/rollinghash.c
	gcc -Wall -c ./src/rollinghash.c
utils.o: ./src/tools/utils.c
	gcc -Wall -c ./src/tools/utils.c

# Testing file 
test: ./examples/testfile.o
	gcc -Wall -o test ./examples/testfile.o
testfile.o: ./examples/testfile.c
	gcc -c ./examples/testfile.c
clean:
	rm -f ./examples/*.o *.o test
