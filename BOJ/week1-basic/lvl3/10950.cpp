#include <iostream>

int main() {
    int cnt;
    int a, b;

    std::cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        std::cin >> a >> b;
        
        std::cout << a + b << std::endl;
    }    

    return 0;
}