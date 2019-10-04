// Tested with g++ (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609.

// Adapted from https://catonmat.net/cpp-polymorphism.

#include <iostream>

class Felid {
public:
   virtual void meow () = 0;
};

class Cat : public Felid {
public:
   void meow () { std::cout << "Meowing like a regular cat! meow!\n"; }
};

class Tiger : public Felid {
public:
   void meow () { std::cout << "Meowing like a tiger! MREOWWW!\n"; }
};

class Ocelot : public Felid {
public:
  void meow () { std::cout << "Meowing like an ocelot! mews!\n"; }
};

void
do_meowing (Felid& cat)
{
  cat.meow ();
}

int
main ()
{
  Cat    cat;
  Tiger  tiger;
  Ocelot ocelot;

  do_meowing (cat);
  do_meowing (tiger);
  do_meowing (ocelot);
}
