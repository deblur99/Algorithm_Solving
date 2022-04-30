#include <iostream>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int a, b;

    while (!(a == 0 && b == 0)) {
        std::cin >> a >> b;

        if (!(a == 0 && b == 0)) {
            std::cout << a + b << "\n";
        }        
    }

    return 0;
}