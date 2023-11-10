#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0); cout.sync_with_stdio(0);

    int N = 0, M = 0, input = 0;
    vector<int> arr; arr.reserve(100000);
    vector<int> seekArr; seekArr.reserve(100000);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> input;
        arr.emplace_back(input);
    }
    sort(arr.begin(), arr.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> input;
        seekArr.emplace_back(input);
    }

    for (int i = 0; i < seekArr.size(); i++) {
        int start = 0, end = arr.size() - 1;
        int target = seekArr[i];      
        bool found = false;

        while (start <= end) {
            int middle = (start + end) / 2;

            if (arr[middle] >= target) {
                if (arr[middle] == target) {
                    found = true;
                }
                end = middle - 1;
            } else {
                start = middle + 1;
            }
        }

        cout << found << "\n";
    }

    return 0;
}