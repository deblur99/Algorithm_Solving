#include <iostream>
#include <string>
#include <ctype.h>

int main() {
    std::string id;

    std::cin >> id;

    if (id.length() <= 50) {
        for (int i = 0; i < id.length(); i++) {
            if (!isalpha(id[i]) || !islower(id[i])) {
                return 0;
            }
        }

        std::cout << id + "??!" << std::endl;
    }

    return 0;
}