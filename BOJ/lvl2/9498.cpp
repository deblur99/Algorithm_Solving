#include <iostream>

int main() {
    int score;

    std::cin >> score;

    if (score < 0 || score > 100) {
        return 0;
    }

    switch (score / 10) {
        case 10:
        case 9:
            std::cout << "A" << std::endl;
            return 0;
        case 8:
            std::cout << "B" << std::endl;
            return 0;
        case 7:
            std::cout << "C" << std::endl;
            return 0;
        case 6:
            std::cout << "D" << std::endl;
            return 0;
        default:
            std::cout << "F" << std::endl;
            return 0;
    }
}