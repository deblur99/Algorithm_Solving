#include <iostream>
#include <vector>

const int size = 30;
const int initVal = -1;
std::vector<int> table(size, initVal);

// 1) N <= M
// 2) 왼쪽 사이트는 오른쪽 사이트 하나하고만 연결되어야 한다.
// 3) 다리끼리는 겹쳐질 수 없다.
// 큰 값 (M)부터 작은 값 (M - N + 1) 방향으로 가므로 top-down 방식으로 풀어야 한다.

// 아이디어
// N개 중 첫번째로 M개 중 하나를 선택할 때의 경우의 수는 M이다.
// 이어서, 두 번째로 M - 1개 중 하나를 선택할 때의 경우의 수는 M - 1이다.
// ...
// 마지막으로 선택할 때의 경우의 수는 M - N + 1이다.

// 따라서, 경우의 수를 순차적으로 곱해주면 된다.

// 시도해 본 것
// 0. combination의 인자에 N, M을 넣고, 호출할 때마다 N, M 값을 각각 1씩 줄인다.
// 1. 결과값 ret 변수를 combination()의 인자에 넣는다. -> ret 값이 업데이트가 안 됨
// ==================

// Base case : N == M. N과 M이 같은 경우에는 문제를 더 이상 쪼갤 수 없고 (atomic), 때문에 경우의 수는 1이다.
//              따라서, 1을 반환해 주어야 한다.

// General case : N < M. 함수 호출 시 M의 개수를 1 줄여나간다.

// 어려운 점 : M의 범위를 어떻게 줄여나갈 것인가?

int combination(int N, int M) {
    int ret = 0;

    if (N == 1)
        return M;

    if (N == M)
        return 1;

    if (table[N] != initVal)
        return table[N];

    for (int i = 0; i < M - N + 1; i++) {
        ret += combination(N - 1, M - i - 1);
    }

    table[N] = ret;
    return ret;
}

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int T;
    std::cin >> T;

    int N, M;
    for (int i = 0; i < T; i++) {
        std::cin >> N >> M;
        if (N < 0 || N > M) return 0;
        if (M < N || M >= 30) return 0;
        
        table.assign(size, -1);

        std::cout << combination(N, M) << "\n";
    }

    return 0;    
}

// https://srccode2.tistory.com/17