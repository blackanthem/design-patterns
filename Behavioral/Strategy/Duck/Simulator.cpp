#include "Ducks.h"

int main()
{
  Duck mallard = MallardDuck();
  mallard.performQuack();
  mallard.performFly();

  Duck model = ModelDuck();
  model.performFly();
  model.setFlyBehavior(new FlyRocketPowered());
  model.performFly();
};