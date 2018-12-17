CC=g++
CFLAGS=-std=c++11 -Wall -Wextra
PROJ=kursach.out

all: clean $(PROJ) softclean

$(PROJ):
	$(CC) $(CFLAGS) -O0 main.cpp handler.cpp fibanacirow.cpp -o $(PROJ)

test:
	./kursach.out
	echo "find 10"
	echo "show_row all"
	echo "find -10"
	echo "show_row all"
	echo "clear"
	echo "show_row"

softclean:
	rm -rf *.o

clean:
	rm -rf *.o $(PROJ)
