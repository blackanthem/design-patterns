#include <iostream>

using namespace std;

class Workshop
{
public:
  virtual void work() = 0;
};

class ProductionWorkshop : public Workshop
{
public:
  void work()
  {
    cout << "producing ";
  };
};

class AssemblyWorkshop : public Workshop
{
public:
  void work() { cout << "assembling "; };
};