#include "PizzaTypes.h"

class PizzaStore {
 public:
  Pizza *orderPizza(const string &type) {
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

class NYPizzaStore : public PizzaStore {
 protected:
  Pizza *createPizza(const string &type) {
    Pizza *pizza;

    if (type == "cheese") {
      pizza = new NYStyleCheesePizza();
    } else if (type == "pepperoni") {
      pizza = new DefaultPizza("NYStylePepperoniPizza");
    } else if (type == "clam") {
      pizza = new DefaultPizza("NYStyleClamPizza");
    } else {
      pizza = new DefaultPizza("NYDefaultPizza");
    };

    return pizza;
  };
};

class ChicagoPizzaStore : public PizzaStore {
 public:
  Pizza *createPizza(const string &type) {
    Pizza *pizza;

    if (type == "cheese") {
      pizza = new ChicagoStyleCheesePizza();
    } else if (type == "pepperoni") {
      pizza = new DefaultPizza("ChicagoStylePepperoniPizza");
    } else if (type == "clam") {
      pizza = new DefaultPizza("ChicagoStyleClamPizza");
    } else {
      pizza = new DefaultPizza("NYDefaultPizza");
    };

    return pizza;
  };
};

class CaliforniaPizzaStore : public PizzaStore {
 public:
  Pizza *createPizza(const string &type) {
    Pizza *pizza;

    if (type == "cheese") {
      pizza = new DefaultPizza("CaliforniaStyleCheesePizza");
    } else if (type == "pepperoni") {
      pizza = new DefaultPizza("CaliforniaStylePepperoniPizza");
    } else if (type == "clam") {
      pizza = new DefaultPizza("CaliforniaStyleClamPizza");
    } else {
      pizza = new DefaultPizza("NYDefaultPizza");
    };

    return pizza;
  };
};
