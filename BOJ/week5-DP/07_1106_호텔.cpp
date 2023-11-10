#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> costV;
std::vector<int> peopleV;

static int C = 0, N = 0;

int findPeople() {
    int dp[C + 1] = {-1, };

    for (int i = 0; i < C; i++) {
        for (int j = 0; j < N; j++) {
            dp[i + peopleV[j]] = std::min(dp[i + peopleV[j]], dp[i] + costV[j]);
        }
    }
}

int main() {
    std::cin.tie(0);
    std::cin.sync_with_stdio(0); std::cout.sync_with_stdio(0);

    int result = 0;

    int C;
    std::cin >> C >> N;

    if (C < 1 || C > 1000) return 0;
    if (N < 0 || N > 20) return 0;

    int cost, people;
    costV.reserve(N); peopleV.reserve(N);

    for (int i = 0; i < N; i++) {
        std::cin >> cost >> people;
        if (cost < 0 || cost > 100) return 0;
        if (people < 0 || people > 100) return 0;

        costV.emplace_back(cost); peopleV.emplace_back(people);
    }

    std::cout << findPeople() << "\n";
    return 0;    
}