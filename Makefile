CC=g++
CFLAGS=-std=c++11 -Wall -Wextra
PROJ=kursach.out

all: clean $(PROJ) softclean

$(PROJ):
	$(CC) $(CFLAGS) -O0 main.cpp handler.cpp fibanacirow.cpp -o $(PROJ)

test:
	./kursach.out
<<<<<<< HEAD
	echo "find 10"
	echo "show_row all"
	echo "find -10"
	echo "show_row all"
	echo "clear"
	echo "show_row"
=======
>>>>>>> 75d79d618d354dad49501b67eced04ede355c413

softclean:
	rm -rf *.o

clean:
	rm -rf *.o $(PROJ)
