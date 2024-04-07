#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;


    if (n >= 0) {
        std::cout << n << " the number is positive.";
    }
    else {
        std::cout << n << " the number is negative.";
    }

    return 0;
}
