#include <iostream>

using namespace std;

int main() {
    
    int n;
    std::cout << "������� �����: ";
    std::cin >> n;


    if (n % 2 == 0) {
        std::cout << n << " �������� ������.";
    }
    else {
        std::cout << n << " �������� ��������";
    }

    return 0;
}