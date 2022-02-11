#include "Equipment.h"
#include "Definitions.h"

// Subclasses of Equipment might include Leaf classes that represent disk drives, integrated circuits, and switches:
class FloppyDisk : public Equipment
{
public:
  FloppyDisk(const char *);
  virtual ~FloppyDisk();

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();
};