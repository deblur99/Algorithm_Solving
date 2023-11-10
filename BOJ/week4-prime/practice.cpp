#include <iostream>
#include <vector>

std::vector<int> v;

void findPrime() {
    bool table[101] = {false, };
    table[0] = table[1] = true;

    for (int i = 2; i < 101; i++) {
        for (int j = 2; i * j < 101; j++) {
            if (table[i * j] == false) {
                table[i * j] = true;
            }
        }
    }

    for (int i = 0; i < 101; i++) {
        if (table[i] == false) {
            v.emplace_back(i);
        }
    }
}

int main() {
    findPrime();

    for (int i: v) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}