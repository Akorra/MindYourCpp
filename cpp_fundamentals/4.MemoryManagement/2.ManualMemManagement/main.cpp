#include "hdr/Person.h"

int main(){
  Person Kate("Kate", "Gregory", 345);
  Kate.AddResource();
  Kate.SetFirstName("Kate2");
  Kate.AddResource(); // stomps on previous resource w/o deleting creating a memory leak
  return 0;
}
