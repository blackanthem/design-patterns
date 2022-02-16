#include "Vehicles.h"

int main()
{
  Vehicle *car = new Car(new ProductionWorkshop);
  car->manufacture();

  Vehicle *bike = new Motorbike(new AssemblyWorkshop);
  bike->manufacture();

  bike->setWorkshop(new ProductionWorkshop);
  bike->manufacture();
};