CC=g++
CFLAGS=-std=c++11 -Wall -Wextra
PROJ=kursach.out

all: clean $(PROJ) softclean

$(PROJ):
	$(CC) $(CFLAGS) -O0 main.cpp handler.cpp fibanacirow.cpp -o $(PROJ)

test:
	touch ./testfile
	echo "find 7" > testfile
	echo "show_row all" >> testfile
	echo "find -10" >> testfile
	echo "show_row all" >> testfile
	echo "clear" >> testfile
	echo "show_row all" >> testfile
	./kursach.out < testfile

softclean:
	rm -rf *.o

clean:
	rm -rf *.o $(PROJ)
