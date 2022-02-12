#include <iostream>

class QuackBehavior
{
public:
  virtual void quack() = 0;
};

class Quack : public QuackBehavior
{
public:
  virtual void quack()
  {
    std::cout << "quack" << std::endl;
  };
};

class MuteQuack : public QuackBehavior
{
public:
  virtual void quack()
  {
    std::cout << "Silence" << std::endl;
  };
};

class Squeak : public QuackBehavior
{
public:
  virtual void quack()
  {
    std::cout << "Squeak" << std::endl;
  };
};
