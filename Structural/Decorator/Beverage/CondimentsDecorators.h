#include "Beverages.h"
#include <iostream>

class CondimentDecorator : public Beverage
{
public:
  CondimentDecorator(Beverage *beverage)
  {
    _beverage = beverage;
  };
  virtual string getDescription() = 0;

protected:
  Beverage *_beverage;
};

class Mocha : public CondimentDecorator
{
public:
  Mocha(Beverage *beverage) : CondimentDecorator(beverage){};

  string getDescription()
  {
    return _beverage->getDescription() + ", mocha";
  };

  int cost()
  {
    return _beverage->cost() + 1;
  };
};

class Soy : public CondimentDecorator
{
public:
  Soy(Beverage *beverage) : CondimentDecorator(beverage){};

  string getDescription()
  {
    return _beverage->getDescription() + ", soy";
  };

  int cost()
  {
    return _beverage->cost() + 2;
  };
};

class Whip : public CondimentDecorator
{
public:
  Whip(Beverage *beverage) : CondimentDecorator(beverage){};

  string getDescription()
  {
    return _beverage->getDescription() + ", whip";
  };

  int cost()
  {
    return _beverage->cost() + 2;
  };
};