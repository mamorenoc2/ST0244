#include <iostream>
#include "polymorphism.h"

void
do_meowing (Felid &cat)
{
  cat.meow();
}

int main ()
{
  Cat cat;
  Tiger tiger;
  Ocelot ocelot;

  do_meowing(cat);
  do_meowing(tiger);
  do_meowing(ocelot);
}
