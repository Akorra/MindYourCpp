#include <iostream>
#include <string>

using namespace std;

int main(){
  int l=0;
  string name, beginning, greeting = "Hi, ";

  cout << "Who might you be?\n\t(A) ";
  cin >> name;

  greeting += name;
  if (name != "Akorra"){
    greeting += ", dafuq are you?!?";
  }
  cout << greeting << endl;

  l = name.length();
  cout << "\"" + name + "\" is " << l << " characters long." << endl;
  auto space = greeting.find(' ');
  beginning = greeting.substr(space+1); //gets substring from space+1 position to end

  if(beginning == name){
    cout << "I FUCKINN ADORE YOU!!!" << endl;
  }
  return 0;
}
