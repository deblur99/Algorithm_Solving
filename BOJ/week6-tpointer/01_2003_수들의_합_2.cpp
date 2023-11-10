#include <iostream>
#include <vector>

int main() {
    std::cin.tie(0); std::cin.sync_with_stdio(0); std::cout.sync_with_stdio(0);

    int N, M;
    std::cin >> N >> M;
    if (N < 1 || N > 10000) return 0;
    if (M < 1 || M > 300000000) return 0;

    int cases = 0;
    std::vector<int> v;
    v.reserve(N);

    int input;
    for (int i = 0; i < N; i++) {
        std::cin >> input;
        if (input < 1 || input > 30000) return 0;
        v.emplace_back(input);
    }
    
    int s_ptr = 0, e_ptr = 0, sum = v[0];
    while (e_ptr < N) {
        if (sum == M) { cases++; }
        if (sum >= M) {
            sum -= v[s_ptr++];
        }
        if (sum < M) {
            sum += v[++e_ptr];
        }
    }

    std::cout << cases << "\n";

    return 0;
}