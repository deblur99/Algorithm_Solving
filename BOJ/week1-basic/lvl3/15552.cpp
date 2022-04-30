#include <iostream>

int main() {
    // C 표준 입출력과의 동기화를 해제하여 처리 속도 향상
    // 단, 입력과 출력이 연속적으로 이뤄지는 경우에는 입력을 모두 처리한 후 출력을 처리한다.
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int cnt;
    int a, b;

    std::cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        std::cin >> a >> b;
        
        std::cout << a + b << "\n";
    }    

    return 0;
}