// Tested with g++ (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609.

// From https://catonmat.net/cpp-polymorphism

#include <iostream>
#include "polymorphism.h"

void
do_meowing (Felid &cat)
{
  cat.meow ();
}

int main ()
{
  Cat    cat;
  Tiger  tiger;
  Ocelot ocelot;

  do_meowing (cat);
  do_meowing (tiger);
  do_meowing (ocelot);
}
