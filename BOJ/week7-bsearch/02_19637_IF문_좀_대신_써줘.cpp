#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0); cout.sync_with_stdio(0);

    int N = 0, M = 0;
    cin >> N >> M;

    vector<pair<string, int>> titleArr; titleArr.reserve(100000);
    vector<int> powerArr; powerArr.reserve(M);

    string inputStr; int inputNum;
    for (int i = 0; i < N; i++) {
        cin >> inputStr >> inputNum;
        titleArr.emplace_back(inputStr, inputNum);
    }

    for (int i = 0; i < M; i++) {
        cin >> inputNum;
        powerArr.emplace_back(inputNum);
    }

    // find bounds
    for (int i = 0; i < powerArr.size(); i++) {
        lower_bound(titleArr.begin(), titleArr.end(), powerArr[i]);
        // move on..
    }
    

    return 0;
}