#include <iostream>

int main() {
    int a, b, c;
    int max = 1;

    std::cin >> a >> b >> c;

    if (a < 1 || a > 6) return 0;
    if (b < 1 || b > 6) return 0;
    if (c < 1 || c > 6) return 0;

    if (a == b && b == c && c == a) {
        std::cout << 10000 + a*1000 << std::endl;
    }
    
    else if (a == b || b == c || c == a) {
        if (a == b) {
            max = a;
        } else if (b == c) {
            max = b;
        } else {
            max = c;
        }

        std::cout << 1000 + max*100 << std::endl;
    } 
    
    else {
        if (a > b) {
            if (c > a) {
                max = c;
            } else {
                max = a;
            }
        }

        if (b > c) {
            if (a > b) {
                max = a;
            } else {
                max = b;
            }
        }

        if (c > a) {
            if (b > c) {
                max = b;
            } else {
                max = c;
            }
        }

        std::cout << max*100 << std::endl;
    }

    return 0;
}