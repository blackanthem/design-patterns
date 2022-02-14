#include <string>
#include <iostream>

using namespace std;

class Pizza
{
public:
  void prepare()
  {
    cout << "preparing " << name << " pizza" << endl;
  };
  // void bake(){};
  // void cut(){};
  // void box(){};

protected:
  string name;
};

class CheesePizza : public Pizza
{
public:
  CheesePizza()
  {
    name = "cheese";
  };
};

class PepperoniPizza : public Pizza
{
public:
  PepperoniPizza()
  {
    name = "pepperoni";
  };
};

class ClamPizza : public Pizza
{
public:
  ClamPizza()
  {
    name = "clam";
  };
};
