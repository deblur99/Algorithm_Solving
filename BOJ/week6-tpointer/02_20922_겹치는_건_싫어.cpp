#include <iostream>
#include <vector>

int COUNT[200001] = {0, };

void reset() {
    for (int i = 0; i < 200000; i++) {
        COUNT[i] = 0;
    }
}

int main() {
    std::cin.tie(0); std::cin.sync_with_stdio(0); std::cout.sync_with_stdio(0);

    int N, K;
    std::cin >> N >> K;

    std::vector<int> v;
    int input;
    v.reserve(N);
    for (int i = 0; i < N; i++) {
        std::cin >> input;
        if (input < 1 || input > 100000) return 0;
        v.emplace_back(input);
    }

    int s_ptr = 0, e_ptr = 0, len = 1;
    while (e_ptr < N) {
        if (COUNT[e_ptr] == K) {
            reset();
        }
        if (COUNT[e_ptr] >= K) {
            s_ptr++;
        }
        if (COUNT[e_ptr] < K) {

        }
        
        COUNT[arr[s_ptr]]++;
        len++;
    }
    
    return 0;
}