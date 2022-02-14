#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pizza
{

public:
  virtual void prepare()
  {
    print("preparing " + name);
    print("tossing dough...");
    print("adding sauce...");
    print("adding toppings.");
    print("adding toppings.");
    for (string topping : toppings)
      print("       " + topping);
  };

  virtual void bake()
  {
    print("baking for 25 minutes at 350 deg");
  };

  virtual void cut()
  {
    print("cutting the pizza to diagonal slices");
  };

  virtual void box()
  {
    print("place pizza in official PizzaStore box");
  };

  string getName(){
    return name;
  };

protected:
  string name;
  string dough;
  string sauce;
  vector<string> toppings;

  void print(const string &text) { cout << text << endl; };
};

class NYStyleCheesePizza : public Pizza
{
public:
  NYStyleCheesePizza()
  {
    name = "ny style sauce and cheese pizza";
    dough = "thin crust dough";
    sauce = "marinara sauce ";
    toppings.push_back("grated reggiano cheese");
  };
};

class ChicagoStyleCheesePizza : public Pizza
{
public:
  ChicagoStyleCheesePizza()
  {
    name = "chicago style deep dish  cheese pizza";
    dough = "extra thick crust dough";
    sauce = "plum tomato sauce ";
    toppings.push_back("shredded mozzarella cheese");
  };

  virtual void cut()
  {
    print("cutting the pizza to square slices");
  };
};

class DefaultPizza : public Pizza
{
public:
  DefaultPizza(const string &type)
  {
    name = type;
    dough = "none";
    sauce = "none";
    toppings.push_back("none");
  };
};
