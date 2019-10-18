
// From p. 229 of Kent D. Lee (2017), Foundations of Programming
// Languages, 2nd ed.

#include <iostream>

using namespace std;

int
main ()
{
  int x = 1;

  // Prints 1,2 and generate the warning
  //
  // "operation on ‘x’ may be undefined [-Wsequence-point]"
  cout << x++ << "," << x << endl;
}
