# Testing file 
test: ./testfile.o
	gcc -Wall -o test ./testfile.o ./../build/rh.a
testfile.o: ./testfile.c
	gcc -c ./testfile.c
clean:
	rm -f ./*.o test