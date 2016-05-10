# Testing file 
test: ./testfile.o
	gcc -Wall -o test ./testfile.o ./../build/rh.a
testfile.o: ./testfile.c
	gcc -Wall -c ./testfile.c
clean:
	rm -f ./*.o test