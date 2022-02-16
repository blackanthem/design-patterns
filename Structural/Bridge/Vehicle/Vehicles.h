#include "Workshops.h"

class Vehicle
{
protected:
  Workshop *workshop;
  Vehicle(Workshop *newWorkshop)
  {
    workshop = newWorkshop;
  };

public:
  virtual void manufacture() = 0;
  void setWorkshop(Workshop *newWorkshop) { workshop = newWorkshop; };
};

class Car : public Vehicle
{
public:
  Car(Workshop *workshop) : Vehicle(workshop){};

  void manufacture()
  {
    workshop->work();
    cout << "car" << endl;
    ;
  };
};

class Motorbike : public Vehicle
{
public:
  Motorbike(Workshop *workshop) : Vehicle(workshop){};

  void manufacture()
  {
    workshop->work();
    cout << "motorbike" << endl;
  };
};