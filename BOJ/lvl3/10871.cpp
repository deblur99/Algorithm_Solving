#include <iostream>
#include <vector>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int n, x, item;
    bool isExistLowerItem = false;
    std::vector<int> *v = new std::vector<int>;

    std::cin >> n >> x;

    if (n < 1 || n > 10000) return 0;
    if (x < 1 || x > 10000) return 0;

    for (int i = 0; i < n; i++) {
        std::cin >> item;
        v->push_back(item); 
    }

    if (v->empty()) {
        return 0;
    } else {
        for (int i = 0; i < v->size(); i++) {
            if (v->at(i) < x) {
                std::cout << v->at(i) << " ";
                isExistLowerItem = true;
            }
        }

        if (!isExistLowerItem) {
            return 0;
        } else {
            std::cout << "\n";
        }        
    }
    
    return 0;
}