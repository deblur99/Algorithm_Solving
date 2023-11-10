#include <iostream>
#include <vector>

const int UNKNOWN = -1;
const int SIZE = 20;

std::vector<int> memo(SIZE + 1, UNKNOWN);

// top-down (memoization)
// 이미 순회한 case는 테이블에 값을 바꿔둔다.
// 즉, 테이블 내 값이 바뀌지 않은 요소는 순회하지 않은 case가 있는 위치이다.
int findFib(int n) {
    if (n < 2) return n;

    if (memo[n] != UNKNOWN)
        return memo[n];

    int result = findFib(n - 1) + findFib(n - 2);
    memo[n] = result;

    return result;
}

// bottom-up (tabulation)
// 테이블을 가장 작은 인덱스부터 채워 나간다!
int findFib2(int n) {
    std::vector<int> table(SIZE + 1, 0);
    table[1] = 1;

    for (int i = 2; i <= n; i++) {
        table[i] = table[i - 1] + table[i - 2];
    }

    return table[n];
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n;
    std::cin >> n;

    if (n < 0 || n > 20) return 0;

    std::cout << findFib(n) << " " << findFib2(n) << "\n";

    return 0;
}