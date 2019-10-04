// Tested with g++ (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609.

// From p. 229 "Kent D. Lee (2017). Foundations of Programming
// Languages. 2nd ed."

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
