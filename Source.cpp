#include <iostream>

using namespace std;

int main() {
    
    int n;
    std::cout << "¬ведите число: ";
    std::cin >> n;


    if (n % 2 == 0) {
        std::cout << n << " €вл€етс€ четным.";
    }
    else {
        std::cout << n << " €вл€етс€ нечетным";
    }

    return 0;
}