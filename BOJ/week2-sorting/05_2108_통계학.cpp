#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define N_LIMIT     500000
#define INPUT_LIMIT 4000

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n, input;
    double avg = 0.0;
    std::vector<int> arr;
    std::vector<int> idxArr, freqTime, freqValue;

    std::cin >> n;

    if (n < 1 || n > N_LIMIT || (n % 2 == 0)) {
        return 0;
    }

    arr.reserve(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input;

        if (input < -INPUT_LIMIT || input > INPUT_LIMIT) {
            return 0;
        }
        
        arr.emplace_back(input);
    }

    std::sort(arr.begin(), arr.end());

    // task 1
    for (int item: arr) {
        avg += item;
    }
    avg = round(avg / arr.size());
    if (avg == -0) avg = 0;
    std::cout << avg << "\n";

    // task 2
    std::cout << arr[(int)floor(arr.size() / 2)] <<  "\n";

    // task 3 <- ongoing damn it
    idxArr.emplace_back(0);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < idxArr.size(); j++) {
            if (arr[i] != arr[idxArr[j]]) {
                idxArr.emplace_back(i);
            }
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        if (freqTime.size() == 0 && freqValue.size() == 0) {
            freqTime.emplace_back(1); freqValue.emplace_back(arr[0]);
            continue;
        }
        for (int j = 0; j < freqValue.size(); j++) {
            if (arr[i] == freqValue[j]) {
                freqTime[j]++;
            }
        }
    }

    int first_freq = freqTime[0], second_freq = 0;
    for (int i = 0; i < freqTime.size(); i++) {
        if (first_freq < freqTime[i]) {
            int temp = first_freq;
            first_freq = second_freq;
            second_freq = temp;
        }
    }
    
    if (first_freq != second_freq) {
        std::cout << arr[idxArr[first_freq]] << "\n";
    } else {
        std::cout << arr[idxArr[second_freq]] << "\n";
    }

    // task 4
    if (arr.size() == 1)
        std::cout << 0 << "\n";    
    else
        std::cout << arr[arr.size() - 1] - arr[0] << "\n";

    return 0;
}