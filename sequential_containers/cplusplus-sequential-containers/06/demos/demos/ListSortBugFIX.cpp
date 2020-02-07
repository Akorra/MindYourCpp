// std::list Sorting ** BUG FIXED ** Demo

#include <iostream>     // For std::cout
#include <list>         // For std::list
#include <string>       // For std::string
using namespace std;

int main() {
    list<string> planets{
        "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"
    };
    
    cout << " Initial list of planets: \n";
    for (auto const& name : planets) {
        cout << ' ' << name;
    }
    cout << "\n\n";

    cout << " Sorting the list... \n\n";
    // WRONG: sort(begin(planets), end(planets));
    planets.sort();

    cout << " Sorted list of planets (alphabetical order): \n";
    for (auto const& name : planets) {
        cout << ' ' << name;
    }
    cout << '\n';
}

