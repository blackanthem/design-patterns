#include <iostream>
#include "FlyBehaviors.h"
#include "QuackBehaviors.h"

class Duck
{
public:
  void display();
  void performFly();
  void performQuack();
  void setFlyBehavior(FlyBehavior *fb);
  void setQuackBehavior(QuackBehavior *qb);
  void swim();

protected:
  FlyBehavior *_flyBehavior;
  QuackBehavior *_quackBehavior;
};

void Duck::display(){};

void Duck::performFly()
{
  _flyBehavior->fly();
}

void Duck::performQuack()
{
  _quackBehavior->quack();
};

void Duck::setFlyBehavior(FlyBehavior *fb)
{
  _flyBehavior = fb;
};

void Duck::setQuackBehavior(QuackBehavior *qb)
{
  _quackBehavior = qb;
};

void Duck::swim()
{
  std::cout << "All ducks float, even decoys" << std::endl;
};

class MallardDuck : public Duck
{
public:
  MallardDuck()
  {
    _flyBehavior = new FlyWithWings();
    _quackBehavior = new Quack();
  };

  void display()
  {
    std::cout << "I am a Mallard Duck" << std::endl;
  };
};

class ModelDuck : public Duck
{
public:
  ModelDuck()
  {
    _flyBehavior = new FlyNoWay();
    _quackBehavior = new Quack();
  }

  void display()
  {
    std::cout << "I am a Model Duck" << std::endl;
  };
};