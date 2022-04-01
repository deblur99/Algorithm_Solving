#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
vector<T> add(vector<T> &arr) {
    vector<T> arr2;

    auto iter = arr.begin();

    while (iter != arr.end()) {
        arr2.emplace_back(*iter + 10);

        iter++;
    }

    return arr2;
}

template <typename T>
void show(vector<T> arr) {
    for (auto item: arr) {
        cout << item << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};

    arr = add(arr);

    show(arr);

    return 0;
}