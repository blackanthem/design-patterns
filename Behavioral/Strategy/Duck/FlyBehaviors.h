#include <iostream>

class FlyBehavior
{
public:
  virtual void fly() = 0;
};

class FlyWithWings : public FlyBehavior
{
public:
  virtual void fly()
  {
    std::cout << "I am flying" << std::endl;
  };
};

class FlyNoWay : public FlyBehavior
{
public:
  virtual void fly()
  {
    std::cout << "I can't fly" << std::endl;
  };
};

class FlyRocketPowered : public FlyBehavior
{
public:
  virtual void fly()
  {
    std::cout << "I am flying with a rocket" << std::endl;
  };
};