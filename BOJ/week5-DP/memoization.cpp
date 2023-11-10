#include <iostream>
#include <vector>

const int UNKNOWN = -1;
const int MAX_SIZE = 100;

std::vector<int> memo(MAX_SIZE, UNKNOWN);

int fibonacci(int n) {
    if (n < 2) return n;

    if (memo[n] != UNKNOWN)
        return memo[n];

    int result = fibonacci(n - 1) + fibonacci(n - 2);
    memo[n] = result;
    return result;
}

int main() {
    std::cout << fibonacci(10) << std::endl;

    return 0;
}