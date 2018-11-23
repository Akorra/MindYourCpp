#pragma once
#include "hdr/Tweeter.h"
#include "hdr/status.h"

using namespace std;

int main(){
  Person p1("Phil", "Marquez", 123);

  {
    //start scope
    Tweeter t1("Someone", "Else", 456, "@whoever");
    string name2 = t1.getName();
    //scope
  }

  cout << "[+] After Innermost block" << endl;
  string name = p1.getName();

  Status s = Pending;
  s = Approved;

  FileError fe = FileError::notfound;
  fe = FileError::ok;
  NetworkError ne = NetworkError::disconnected;
  ne = NetworkError::ok;

  return 0;
}
