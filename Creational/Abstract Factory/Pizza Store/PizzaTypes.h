#include <iostream>
#include <string>
#include <vector>
#include "PizzaIngredientFactory.h"

using namespace std;

class Pizza
{

public:
  virtual void prepare() = 0;

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

  string getName()
  {
    return name;
  };

  void setName(const string &text)
  {
    name = text;
  };

protected:
  string name;
  Dough *dough;
  Sauce *sauce;
  Cheese *cheese;
  Pepperoni *pepperoni;
  Clam *clam;
  PizzaIngredientFactory *ingredientFactory;

  void print(const string &text) { cout << text << endl; };
};

class CheesePizza : public Pizza
{
public:
  CheesePizza(PizzaIngredientFactory *ingredientFactory)
  {
    ingredientFactory = ingredientFactory;
  };

  void prepare()
  {
    print("preparing " + name);
    // dough = ingredientFactory->createDough();
    // sauce = ingredientFactory->createSauce();
    // cheese = ingredientFactory->createCheese();
  };
};

class ClamPizza : public Pizza
{
public:
  ClamPizza(PizzaIngredientFactory *ingredientFactory)
  {
    ingredientFactory = ingredientFactory;
  };

  void prepare()
  {
    print("preparing " + name);
    // dough = ingredientFactory->createDough();
    // sauce = ingredientFactory->createSauce();
    // cheese = ingredientFactory->createCheese();
    // clam = ingredientFactory->createClams();
  };
};

class PepperoniPizza : public Pizza
{
public:
  PepperoniPizza(PizzaIngredientFactory *ingredientFactory)
  {
    ingredientFactory = ingredientFactory;
  };

  void prepare()
  {
    print("preparing " + name);
    // dough = ingredientFactory->createDough();
    // sauce = ingredientFactory->createSauce();
    // cheese = ingredientFactory->createCheese();
    // pepperoni = ingredientFactory->createPepperoni();
  };
};

class DefaultPizza : public Pizza
{
public:
  DefaultPizza(PizzaIngredientFactory *ingredientFactory)
  {
    ingredientFactory = ingredientFactory;
  };

  void prepare()
  {
    print("preparing " + name);
  };
};