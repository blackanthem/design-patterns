#include <string>

using namespace std;

class Beverage
{
public:
  virtual string getDescription()
  {
    return _description;
  };

  virtual int cost() { return 100; };

protected:
  string _description = "unknown beverage";
};

class Espresso : public Beverage
{
public:
  Espresso()
  {
    _description = "espresso";
  };

  int cost() { return 2; };
};

class HouseBlend : public Beverage
{
public:
  HouseBlend()
  {
    _description = "house blend coffee";
  };

  int cost() { return 1; };
};

class DarkRoast : public Beverage
{
public:
  DarkRoast()
  {
    _description = "dark roast coffee";
  };

  int cost() { return 3; };
};

class Decaf : public Beverage
{
public:
  Decaf()
  {
    _description = "decaf";
  };

  int cost() { return 4; };
};