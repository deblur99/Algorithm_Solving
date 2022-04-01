#include <iostream>
#include <vector>

#define ARR_LENGTH 10000000
#define BUF_LENGTH 1000000
#define MAX_VAL    10000

template <typename T>
void counting(std::vector<T> &arr) {
    std::vector<T> itemArr;
    itemArr.reserve(MAX_VAL + 1);
    std::fill(itemArr.begin(), itemArr.end(), -1);

    std::vector<T> countArr;
    countArr.reserve(MAX_VAL + 1);
    std::fill(countArr.begin(), countArr.end(), -1);

    auto iter = arr.begin();
    auto countIter = countArr.begin();

    for (; iter != arr.end(); iter++) {
        countArr[*iter]++;
    }

    for (int i = 0; i < MAX_VAL + 1; i++) {
        if (countArr[i] != -1) {
            while (countArr[i] > 0) {
                std::cout << i << "\n";
                countArr[i]--;
            }
        }
    }
}

int main() {
    std::cin.tie(NULL); std::cin.sync_with_stdio(false);

    int n, item;
    std::vector<int> arr;

    std::cin >> n;

    if (n < 1 || n > ARR_LENGTH) return 0;

    arr.reserve(BUF_LENGTH);

    for (int i = 0; i < n; i++) {
        if (arr.size() < BUF_LENGTH) {
            std::cin >> item;
            arr.push_back(item);
        } else {
            counting(arr);
            arr.clear();
        }
    }

    counting(arr);
    arr.clear();

    return 0;
}