// Tested with g++ (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609.

// From: Wikipedia (2019-09-27)
// https://en.wikipedia.org/wiki/Function_overloading

#include <iostream>

using namespace std;

// Volume of a cube.
int
volume (int s)
{
  return s * s * s;
}

// Volume of a cylinder.
double
volume (double r, int h)
{
  return 3.1415926 * r * r h;
}

// Volume of a cuboid.
long
volume (long l, int b, int h)
{
  return l * b * h;
}

int
main ()
{
  cout << volume (10) << endl;
  cout << volume (2.5, 8) << endl;
  cout << volume (100l, 75, 15) << endl;
}
