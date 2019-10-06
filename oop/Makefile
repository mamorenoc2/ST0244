
CC       := g++
CFLAGS   := -Wall -Wextra
C11FLAGS := -Wall -Wextra -std=c++11

all : exceptions \
      function-overloading \
      pointers-and-references \
      polymorphism \
      signal-handling

exceptions : exceptions.cpp
	$(CC) $(C11FLAGS) $<

function-overloading : function-overloading.cpp
	$(CC) $(CFLAGS) $<

pointers-and-references : pointers-and-references.cpp
	$(CC) $(C11FLAGS) $<

polymorphism : polymorphism.cpp
	$(CC) $(CFLAGS) $<

signal-handling : signal-handling.cpp
	$(CC) $(CFLAGS) $<

clean :
	rm -f a.out
