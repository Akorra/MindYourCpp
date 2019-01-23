#include "hdr/Resource.h"
#include <string>

using std::string;

int main(){
  {
    Resource localResource ("local");
    string localString = localResource.GetName();
  }

  Resource* pResource = new Resource("created with new");
  string newString = pResource->getName();
  int j = 3;
  if(j==3){
    return 0;
    //bad since if we leave here we leave behind undeleted memory;
  }
  Resource* p2 = pResource;

  delete pResource;
  pResource = nullptr; //safer can call delete on nullptr
  string string2 = p2->GetName(); //bad things happen p2 is pointing to nothing
  delete pResource; //bad already deleted
  delete p2; //memory already deleted

  // BOOM! using something that was deleted
  string string3 = pResource->GetName();

  return 0;
}
