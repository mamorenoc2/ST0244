
CC       := g++
CFLAGS   := -Wall -Wextra
C11FLAGS := -Wall -Wextra -std=c++11

side-effects1 : side-effects1.pas
	fpc -vewnhi $<

side-effects2 : side-effects2.cpp
	$(CC) $(CFLAGS) $<

constexpr : constexpr.cpp
	$(CC) $(C11FLAGS) $<

clean :
	rm -f a.out side-effects1 side-effects1.o
