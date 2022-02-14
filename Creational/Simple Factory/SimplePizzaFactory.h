#include "PizzaTypes.h"

class SimplePizzaFactory
{
public:
  Pizza *createPizza(const string &type)
  {
    Pizza *pizza;

    if (type == "cheese")
    {
      pizza = new CheesePizza();
    }
    else if (type == "pepperoni")
    {
      pizza = new PepperoniPizza();
    }
    else
    {
      pizza = new ClamPizza();
    };

    return pizza;
  };
};
