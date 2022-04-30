#include <iostream>

int main() {
    double a, b;
    
    std::cin >> a >> b;

    std::cout.precision(25);
    std::cout << a / b << std::endl;

    return 0;
}