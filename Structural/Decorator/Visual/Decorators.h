#include "VisualComponent.h"

/*    DECORATOR   */
class Decorator : public VisualComponent
{
public:
  virtual void draw();

protected:
  VisualComponent *_component;
};

void Decorator::draw()
{
  _component->draw();
};

/*    BORDER DECORATOR    */
class BorderDecorator : public Decorator
{
public:
  BorderDecorator(VisualComponent *component, int borderWidth)
  {
    _component = component;
    _width = borderWidth;
  };
  virtual void draw();

private:
  void drawBorder();

  int _width;
};

void BorderDecorator::draw()
{
  Decorator::draw();
  drawBorder();
};

void BorderDecorator::drawBorder()
{
  print("I am drawing a border of width " + _width);
};