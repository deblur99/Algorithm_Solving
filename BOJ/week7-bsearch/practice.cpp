#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
    cin.tie(0); cin.sync_with_stdio(0); cout.sync_with_stdio(0);

    vector<int> arr = {8,2,1,4,9,6,7,3,5};
    sort(arr.begin(), arr.end());

    // indexes
    int target = 3;
    int start = 0, end = 8;
    int result = 0;

    while (start <= end) {
        int middle = (start + end) / 2; // middle index
        if (arr[middle] >= target) {
            if (arr[middle] == target) {
                result = middle;
            }
            end = middle - 1;
        } else if (arr[middle] < target) {
            start = middle + 1;
        }
    }

    cout << arr[result] << "\n";
    return 0;
}