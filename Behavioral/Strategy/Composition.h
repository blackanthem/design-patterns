
class Composition
{
public:
  Composition(Compositor *);
  void Repair();

private:
  Compositor *_compositor;
  Component *_components;
  int _componentCount;
  int lineWidth;
  int *lineBreaks;
  int lineCount;
};

void Composition::Repair()
{
  Coord *natural;
  Coord *stretchability;
  Coord *shrinkability;
  int componentCount;
  int lineWidth;
  int *breaks;
  // prepare the arrays with the desired component sizes
  // ...
  // determine where the breaks are:
  int breakCount;
  breakCount = _compositor->Compose(
      natural, stretchability, shrinkability,
      componentCount, lineWidth, breaks);
  // lay out components according to breaks
  // ...
}

class Compositor
{
public:
  virtual int Compose(
      Coord natural[], Coord stretch[], Coord shrink[],
      int componentCount, int lineWidth, int breaks[]) = 0;

protected:
  Compositor();
};

class SimpleCompositor : public Compositor
{
public:
  SimpleCompositor();
  virtual int Compose(
      Coord natural[], Coord stretch[], Coord shrink[],
      int componentCount, int lineWidth, int breaks[]);
};

class TeXCompositor : public Compositor
{
public:
  TeXCompositor();
  virtual int Compose(
      Coord natural[], Coord stretch[], Coord shrink[],
      int componentCount, int lineWidth, int breaks[]);
  // ...
};

class ArrayCompositor : public Compositor
{
public:
  ArrayCompositor(int interval);
  virtual int Compose(
      Coord natural[], Coord stretch[], Coord shrink[],
      int componentCount, int lineWidth, int breaks[]);
  // ...
};

class Component
{
};

class Coord
{
};

//To instantiate Composition you pass it the composition you want
Composition* quick = new Composition(new SimpleCompositor);
Composition* slick = new Composition(new TeXCompositor);
// Composition* iconic = new Composition(new ArrayCompositor);