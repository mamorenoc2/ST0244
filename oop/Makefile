
CC     := g++
CFLAGS := -Wall -Wextra

all : exceptions \
      function-overloading \
      pointers-and-references \
      polymorphism \
      signal-handling

exceptions : exceptions.cpp
	$(CC) $(CFLAGS) -std=c++11 $<

function-overloading : function-overloading.cpp
	$(CC) $(CFLAGS) $<

pointers-and-references : pointers-and-references.cpp
	$(CC) $(CFLAGS) -std=c++11 $<

polymorphism : polymorphism.cpp
	$(CC) $(CFLAGS) $<

signal-handling : signal-handling.cpp
	$(CC) $(CFLAGS) $<

clean :
	rm -f a.out
