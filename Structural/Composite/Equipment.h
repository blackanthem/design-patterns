#include "Definitions.h"


//  Equipment class defines an interface for all equipment in the part-whole hierarchy.
class Equipment
{
public:
  virtual ~Equipment();

  const char *Name() { return _name; }

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();

  virtual void Add(Equipment *);
  virtual void Remove(Equipment *);
  virtual Iterator* CreateIterator();

protected:
  Equipment(const char *);

private:
  const char *_name;
};