#include <iostream>
#include <vector>

int fibonacci(int n) {
    std::vector<int> DP(n + 1, 0);
    DP[1] = 1;

    for (int i = 2; i <= n; i++) {
        DP[i] = DP[i - 1] + DP[i - 2];
    }

    return DP[n];
}

int main() {
    std::cout << fibonacci(10) << std::endl;

    return 0;
}