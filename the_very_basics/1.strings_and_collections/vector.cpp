#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //sort and count

using namespace std;

int main(){
  int i;
  string s;
  vector<int> vi;
  vector<string> vs;

  for(i=0; i<10; i++)
    vi.push_back(i);

  for(auto item:vi)
    cout << item << " ";
  cout << endl;

  cout << "[+] Enter 3 words (no spaces):" << endl;
  for(i=0; i<3; i++){
    cout << "\t[+] " << i+1 << ". ";
    cin >> s;
    vs.push_back(s);
  }

  cout << "[+] Your phrase: ";
  for(auto item:vs)
    cout << item << " ";
  cout << endl;

  cout << "[+] Int vector vi has " << vi.size() << " elements." << endl;
  cout << "[+] String vector vs has " << vs.size() << " elements." << endl;

  vi[1]=99;
  vs[0]="<placeholder>";

  cout << "[+] Vi: ";
  for(unsigned int j=0; j<vi.size(); j++)
    cout << vi[j] << " ";
  cout << endl;

  //negin and end return pointers
  cout << "[+] Vi: ";
  for(auto j=begin(vi); j!=end(vi); j++)
    cout << *j << " "; //what iterator j is pointing to
  cout << endl;

  //lets sort vs
  sort(begin(vs), end(vs)); //specify from which to what element we want to sort
  cout << "[+] Sorted vs: ";
  for(auto item:vs)
    cout << item << " ";
  cout << endl;

  //lets count how many nr 3s in vi
  cout << "[+] Vi has " << count(begin(vi), end(vi), 3) << " elements equal to 3!" << endl;

  // count how many t's the first element of vs sorted has
  cout << "[+] Vs has " << count(begin(vs[0]), end(vs[0]), 't') << " elements equal to t!" << endl;

  return 0;
}
