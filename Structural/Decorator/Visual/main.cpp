#include "Decorators.h"

int main()
{
  VisualComponent *a4Sheet = new VisualComponent();
  VisualComponent *border = new BorderDecorator(a4Sheet, 5);

  border->draw();
};