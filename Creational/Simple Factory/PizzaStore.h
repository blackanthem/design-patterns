#include "SimplePizzaFactory.h"

class PizzaStore
{

public:
  Pizza *orderPizza(const string &type)
  {
    Pizza *pizza = factory->createPizza(type);

    pizza->prepare();

    return pizza;
  };

private:
  SimplePizzaFactory *factory;
};