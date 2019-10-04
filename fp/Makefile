
CC     := g++
CFLAGS := -Wall -Wextra

side-effects1 : side-effects1.pas
	fpc -vewnhi $<

side-effects2 : side-effects2.cpp
	$(CC) $(CFLAGS) $<

clean :
	rm -f a.out side-effects1 side-effects1.o
