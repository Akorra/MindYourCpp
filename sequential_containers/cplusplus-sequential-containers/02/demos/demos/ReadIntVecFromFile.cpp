#include <fstream>      // for std::ifstream
#include <iostream>     // for std::cout
#include <vector>       // for std::vector

int main() {
    std::vector<int> v{};

    std::ifstream inputFile{ "data.txt" };
    int n{};
    while (inputFile >> n) {
        v.push_back(n);
    }

    for (auto x : v) {
        std::cout << x << '\n';
    }
}
