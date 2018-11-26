CC=g++
CFLAGS=-std=c++11 -Wall -Wextra
PROJ=kursach.out
TEST=compare-kursach.out

all: clean $(PROJ) $(TEST) softclean

$(PROJ):
	$(CC) $(CFLAGS) -O0 main.cpp fibanacirow.cpp -o $(PROJ)

$(TEST):
	$(CC) $(CFLAGS) -O3 compare_main.cpp -o $(TEST)

softclean:
	rm -rf *.o

compare:
	time --portability  ./$(PROJ)
	time -p ./$(TEST)

clean:
	rm -rf *.o $(PROJ) $(TEST)
