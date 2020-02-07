#include <fstream>      // for std::ifstream
#include <iostream>     // for std::cout
#include <string>       // for std::string, std::getline
#include <vector>       // for std::vector
using namespace std;

int main() {
    vector<string> lines{};

    ifstream inputFile{ "strings.txt" };
    string line{};
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    for (const auto& x : lines) {
        cout << x << '\n';
    }
}

