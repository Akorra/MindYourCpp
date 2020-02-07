// Demo: Searching strings in std::vector ignoring case, using std::find_if

#include <algorithm>                    // for std::find_if, std::equal
#include <cctype>                       // for std::tolower
#include <iostream>                     // for console I/O
#include <string>                       // for std::string
#include <vector>                       // for std::vector

using namespace std;

// Case-insensitive string comparison
// (Note: doesn't work for UTF-8)
inline bool EqualsNoCase(const string& s1, const string& s2) {
    return equal(begin(s1), end(s1),
                 begin(s2), end(s2),
                 [](char ch1, char ch2) {
                     // Compare char by char in lowercase  
                     return tolower(ch1) == tolower(ch2);
                 });
}

int main() {
    vector<string> v{"Galileo", "C64", "Connie", "Amiga", "C++"};
    
    cout << " String vector contains: \n";
    for (const auto& s : v) {
        cout << "    " << s << '\n';
    }
    cout << '\n';

    cout << " Please enter a string to search for: ";
    string s;
    cin >> s;
    cout << '\n';

    auto pos = find_if(begin(v), end(v), 
        [&s](const auto& x) {
            return EqualsNoCase(x, s); // case-insensitive string compare
        });
    if (pos != end(v)) {
        cout << ' ' << s << " was found in the vector! \n";  
    } else {
        cout << " The vector doesn't contain " << s << " \n";
    }
}

