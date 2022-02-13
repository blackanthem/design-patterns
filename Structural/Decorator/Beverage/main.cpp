#include <iostream>
#include "CondimentsDecorators.h"

void print(Beverage *beverage)
{
  std::cout << "The cost of " << beverage->getDescription() << " is " << beverage->cost() << std::endl;
};

int main()
{
  Beverage *beverage = new Espresso();
  print(beverage);

  Beverage *beverage2 = new DarkRoast();
  print(beverage2);

  Beverage *beverage3 = new Mocha(new Mocha(beverage));
  print(beverage3);

  Beverage *beverage4 = new HouseBlend();
  beverage4 = new Soy(beverage4);
  beverage4 = new Mocha(beverage4);
  beverage4 = new Whip(beverage4);
  print(beverage4);
};