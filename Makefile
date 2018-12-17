CC=g++
CFLAGS=-std=c++11 -Wall -Wextra
PROJ=fib.out

all: clean $(PROJ) softclean

$(PROJ):
	$(CC) $(CFLAGS) -O0 main.cpp handler.cpp fibanacirow.cpp -o $(PROJ)

test:
	echo "find 7" > testfile

softclean:
	rm -rf *.o

clean:
	rm -rf *.o $(PROJ) testfile

white-list:
	rm -rf $(PWD)
