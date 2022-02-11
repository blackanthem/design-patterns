#include "Equipment.h"
#include "Definitions.h"

// CompositeEquipment is the base class for equipment that contains other equipment. It's also a subclass of Equipment.
class CompositeEquipment : public Equipment
{
public:
  virtual ~CompositeEquipment();

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();

  virtual void Add(Equipment *);
  virtual void Remove(Equipment *);
  virtual Iterator *CreateIterator();

protected:
  CompositeEquipment(const char *);

private:
  List _equipment;
};

// Currency CompositeEquipment::NetPrice()
// {
//   Iterator *i = CreateIterator();
//   Currency total = 0;

//   for (i->First(); !i->IsDone(); i->Next())
//   {
//     total += i->CurrentItem()->NetPrice();
//   }

//   delete i;
//   return total;
// }