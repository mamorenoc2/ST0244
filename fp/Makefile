
CC        := g++
C_FLAGS   := -Wall -Wextra
C11_FLAGS := -Wall -Wextra -std=c++11

GHC_FLAGS := -Wall

side-effects1 : side-effects1.pas
	fpc -vewnhi $<

side-effects2 : side-effects2.cpp
	$(CC) $(C_FLAGS) $<

constexpr : constexpr.cpp
	$(CC) $(C11_FLAGS) $<

fibonacci : Fibonacci.hs
	ghc $(GHC_FLAGS) -o fibonacci $<

quickcheck : QuickCheck.hs
	ghc $(GHC_FLAGS) -o quickcheck $<

clean :
	rm -f *.hi
	rm -f *.o
	rm -f a.out
	rm -f fibonacci
	rm -f quickcheck
	rm -f side-effects1
