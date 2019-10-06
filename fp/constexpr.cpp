// Created on 2019-10-05.

// Tested with g++ (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609.

#include <stdio.h>

// Possible error: body of constexpr function ‘constexpr double
// square(double)’ not a return-statement

constexpr int
square (int x)
{
  // printf ("%d\n", x)
  return x*x;
  // return (printf ("%d\n", x));
}

int
main ()
{
  printf ("%d\n", square (3));
}
