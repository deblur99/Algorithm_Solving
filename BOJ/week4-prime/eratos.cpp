#include <iostream>
#include <vector>

using namespace std;

bool PN[101];

vector<int> v;

void primeNum() {
    for (int i = 2; i <= 100; i++) {
        if (PN[i])
            continue;

        for (int j = 2; i * j <= 100; j++) {
            PN[i*j] = true;
        }
    }

    for (int i = 2; i <= 100; i++) {
        if (!PN[i]) v.push_back(i);
    }
}

int main() {
    // 입출력 속도 최적화
    cin.tie(NULL);
    cin.sync_with_stdio(false); cout.sync_with_stdio(false);

    primeNum();

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\n";

    return 0;
}