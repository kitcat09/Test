#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;


    if (n % 2 == 0) {
        std::cout << n << " the number is even.";
    }
    else {
        std::cout << n << " the number is not even.";
    }

    return 0;
}
