CC=g++
CFLAGS=-std=c++11 -Wall -Wextra -O0
PROJ=kursach.out
TEST=compare-kursach.out

all: clean $(PROJ) $(TEST) softclean

$(PROJ):
	$(CC) $(CFLAGS) main.cpp fibanacirow.cpp -o $(PROJ)

$(TEST):
	$(CC) $(CFLAGS) compare_main.cpp -o $(TEST)

softclean:
	rm -rf *.o

compare:
	time ./$(PROJ)
	time ./$(TEST)

clean:
	rm -rf *.o $(PROJ) $(TEST)
