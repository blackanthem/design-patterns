#include <vector>
#include "PizzaIngredients.h"

using namespace std;

class PizzaIngredientFactory
{
private:
public:
  virtual Dough *createDough() = 0;
  virtual Sauce *createSauce() = 0;
  virtual Cheese *createCheese() = 0;
  virtual Pepperoni *createPepperoni() = 0;
  virtual Clam *createClams() = 0;
};

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
  Dough *createDough()
  {
    return new ThinCrustDough();
  };

  Sauce *createSauce()
  {
    return new MarinaraSauce();
  };

  Cheese *createCheese()
  {
    return new ReggianoCheese();
  };

  Pepperoni *createPepperoni()
  {
    return new SlicedPepperoni();
  };

  Clam *createClams()
  {
    return new FreshClams();
  };
};

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
  Dough *createDough()
  {
    return new ThickCrustDough();
  };

  Sauce *createSauce()
  {
    return new PlumTomatoSauce();
  };

  Cheese *createCheese()
  {
    return new MozzarellaCheese();
  };

  Pepperoni *createPepperoni()
  {
    return new SlicedPepperoni();
  };

  Clam *createClams()
  {
    return new FrozenClams();
  };
};