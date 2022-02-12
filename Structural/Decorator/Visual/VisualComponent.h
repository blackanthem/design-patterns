#include <iostream>
#include <string>

using namespace std;

class VisualComponent
{
public:
  virtual void draw();
  void print(const string &string);
};

void VisualComponent::print(const string &text)
{

  cout << text << endl;
};

void VisualComponent::draw()
{
  print("I am the main component");
};
