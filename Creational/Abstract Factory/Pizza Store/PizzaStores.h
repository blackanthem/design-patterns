#include "PizzaTypes.h"

class PizzaStore
{
public:
  Pizza *orderPizza(const string &type)
  {
    Pizza *pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
  };

protected:
  virtual Pizza *createPizza(const string &type) = 0;
};

class NYPizzaStore : public PizzaStore
{
protected:
  Pizza *createPizza(const string &type)
  {
    Pizza *pizza;
    PizzaIngredientFactory *ingredientFactory = new NYPizzaIngredientFactory();

    if (type == "cheese")
    {
      pizza = new CheesePizza(ingredientFactory);
      pizza->setName("ny style cheese pizza");
    }
    else if (type == "pepperoni")
    {
      pizza = new PepperoniPizza(ingredientFactory);
      pizza->setName("ny style pepperoni pizza");
    }
    else if (type == "clam")
    {
      pizza = new ClamPizza(ingredientFactory);
      pizza->setName("ny style clam pizza");
    }
    else
    {
      pizza = new DefaultPizza(ingredientFactory);
      pizza->setName("ny style default pizza");
    };

    return pizza;
  };
};

class ChicagoPizzaStore : public PizzaStore
{
protected:
  Pizza *createPizza(const string &type)
  {
    Pizza *pizza;
    PizzaIngredientFactory *ingredientFactory = new ChicagoPizzaIngredientFactory();

    if (type == "cheese")
    {
      pizza = new CheesePizza(ingredientFactory);
      pizza->setName("chicago style cheese pizza");
    }
    else if (type == "pepperoni")
    {
      pizza = new PepperoniPizza(ingredientFactory);
      pizza->setName("chicago style pepperoni pizza");
    }
    else if (type == "clam")
    {
      pizza = new ClamPizza(ingredientFactory);
      pizza->setName("chicago style clam pizza");
    }
    else
    {
      pizza = new DefaultPizza(ingredientFactory);
      pizza->setName("chicago style default pizza");
    };

    return pizza;
  };
};

// class CaliforniaPizzaStore : public PizzaStore {
//  public:
//   Pizza *createPizza(const string &type) {
//     Pizza *pizza;

//     if (type == "cheese") {
//       pizza = new DefaultPizza("CaliforniaStyleCheesePizza");
//     } else if (type == "pepperoni") {
//       pizza = new DefaultPizza("CaliforniaStylePepperoniPizza");
//     } else if (type == "clam") {
//       pizza = new DefaultPizza("CaliforniaStyleClamPizza");
//     } else {
//       pizza = new DefaultPizza("NYDefaultPizza");
//     };

//     return pizza;
//   };
// };
