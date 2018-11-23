#include <iostream>
#include <string>

using namespace std;

void words(){
  int size1, size2;
  string word1, word2;

  cout << "[+] Feed me 2 words I'll tell you which one is longer..." << endl;
  cout << "\t [+] First word: ";
  cin >> word1;
  cout << "\t [+] Second word: ";
  cin >> word2;

  size1 = word1.length();
  size2 = word2.length();
  if(size1 > size2){
    cout << "[+] \"" + word1 + "\" is bigger than \"" + word2 + "\"." << endl;
  }else if(size1 < size2){
    cout << "[+] \"" + word2 + "\" is bigger than \"" + word1 + "\"." << endl;
  }else{
    cout << "[+] Both words are the same size." << endl;
  }
}

void phrases(){
  int size1, size2;
  string word1, word2;

  cout << "[+] Feed me 2 phrases I'll tell you which one is longer..." << endl;
  cout << "\t [+] First phrase: ";
  getline(cin, word1);

  cout << "\t [+] Second phrase: ";
  getline(cin, word2);

  size1 = word1.length();
  size2 = word2.length();
  if(size1 > size2){
    cout << "[+] \"" + word1 + "\" is bigger than \"" + word2 + "\"." << endl;
  }else if(size1 < size2){
    cout << "[+] \"" + word2 + "\" is bigger than \"" + word1 + "\"." << endl;
  }else{
    cout << "[+] Both words are the same size." << endl;
  }
}

int main(){
  int option = -1;

  while(option != 0){
    cout << "[+] Words(1) or Phrases(2)? ";
    cin >> option;
    if(option==1){
      words();
    }else if(option==2){
      phrases();
    }else if(option==0){
      return 0;
    }else{
      cout << "\t[-] Try again smartass... (to quit choose 0)" << endl;
    }
  }
}
