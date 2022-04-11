#include <iostream>
#include <queue>
#include <list>

class Balloon {
private:
    int _number;
    int _nextNumber;
public:
    Balloon(int number, int nextNumber) {
        _number = number;
        _nextNumber = nextNumber;
    }

    int getNextNumber() {
        return _nextNumber;
    }
};

static std::list<Balloon> balloonList;
static std::queue<Balloon> balloonResultQueue;

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false); std::cout.sync_with_stdio(false);

    int n;
    std::cin >> n;
    if (n < 1 || n > 1000) return 0;
        
    int nextNumber = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> nextNumber;
        if (nextNumber == 0) return 0;
        balloonList.push_back(Balloon(i+1, nextNumber));
    }

    return 0;
}