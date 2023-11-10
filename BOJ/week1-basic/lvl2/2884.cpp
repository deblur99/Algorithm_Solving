#include <iostream>

int main() {
    int H, M; // src
    int gap;

    std::cin >> H >> M;

    if (H < 0 || H > 23) {
        return 0;
    }

    if (M < 0 || M > 59) {
        return 0;
    }

    gap = M - 45;

    if (gap < 0) {
        H--; M = 60 + gap;

        if (H < 0) {
            H = 23;
        }
        
    } else {
        M = gap;
    }

    std::cout << H << " " << M << std::endl;

    return 0;
}