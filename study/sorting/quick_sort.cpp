#include <iostream>
#include <vector>

// partition() 함수는 컨테이너 객체에서 분할 연산을 적용할 원소의 시작과 끝 반복자를 인자로 받고,
// 분할 연산에 의해 생성되는 오른쪽 부분 배열의 시작 원소를 가리키는 반복자를 교환합니다.
// 즉, 주어진 벡터가 분할되어 피벗보다 큰 원소는 오른쪽 부분에 위치하게 되고,
// 피벗보다 작거나 같은 원소는 왼쪽 부분에 나타나게 됩니다.
template <typename T>
auto partition(typename std::vector<T>::iterator begin,
    typename std::vector<T>::iterator end) {
        // 세 개의 반복자 생성
        // 하나는 피벗을 가리키고, 나머지 둘은 벡터의 시작과 마지막 원소를 가리킵니다.
        auto pivot_val = *begin;    // 역참조 값
        auto left_iter = begin + 1; // 포인터
        auto right_iter = end;      // 포인터 2

        while (true) {
            // left -> right
            // 벡터의 첫 번째 원소부터 시작하여 피벗보다 큰 원소를 찾습니다.
            while (*left_iter <= pivot_val && std::distance(left_iter, right_iter) > 0) {
                left_iter++;
            }

            // right -> left
            // 벡터의 마지막 원소부터 시작하여 역순으로 피벗보다 작은 원소를 찾습니다.
            while (*right_iter > pivot_val && std::distance(left_iter, right_iter) > 0) {
                right_iter--;
            }

            // 만약 left_iter와 right_iter가 같다면 교환할 원소가 없음을 의미합니다.
            // 그렇지 않으면, left_iter와 right_iter가 가리키는 원소를 서로 교환합니다.
            if (left_iter == right_iter) {
                break;
            } else {
                std::iter_swap(left_iter, right_iter);
            }
        }

        if (pivot_val > *right_iter) {
            std::iter_swap(begin, right_iter);
        }

        return right_iter;
    }

template <typename T>
void quick_sort(typename std::vector<T>::iterator begin,
    typename std::vector<T>::iterator last) {
        // 만약 벡터에 하나 이상의 원소가 있다면
        if (std::distance(begin, last) >= 1) {
            // 분할 작업을 수행
            auto partition_iter = partition<T>(begin, last);
            
            // 분할 작업에 의해 생성된 벡터를 재귀적으로 정렬
            quick_sort<T>(begin, partition_iter - 1);
            quick_sort<T>(partition_iter, last);
        }
    }

template <typename T>
void print_vector(std::vector<T> arr) {
    for (auto i: arr) {
        std::cout << i << " ";
    }

    std::cout << "\n";
}

void run_quick_sort_test() {
    std::vector<int>    S1 {45, 1, 3, 1, 2, 3, 45, 5, 1, 2, 44, 5, 7};
    std::vector<float>  S2 {45.6f, 1.0f, 3.8f, 1.01f, 2.2f, 3.9f, 45.3f, 5.5f,
                            1.0f, 2.0f, 44.0f, 5.0f, 7.0f};
    std::vector<double> S3 {45.6, 1.0, 3.8, 1.01, 2.2, 3.9, 45.3, 5.5,
                            1.0, 2.0, 44.0, 5.0, 7.0};
    std::vector<char>   C  {'b', 'z', 'a', 'e', 'f', 't', 'q', 'u', 'y'};

    std::cout << "정렬되지 않은 입력 벡터 : " << "\n";
    print_vector<int>(S1); // 자료형 써주고 -> 인자 써주고
    print_vector<float>(S2);
    print_vector<double>(S3);
    print_vector<char>(C);
    std::cout << std::endl;

    // arr.end()는 맨 마지막 원소 다음을 가리키므로 arr.end() - 1 형태로 호출합니다.
    quick_sort<int>(S1.begin(), S1.end() - 1);
    quick_sort<float>(S2.begin(), S2.end() - 1);
    quick_sort<double>(S3.begin(), S3.end() - 1);
    quick_sort<char>(C.begin(), C.end() - 1);

    std::cout << "퀵 정렬에 의해 정렬된 벡터 : " << "\n";
    print_vector<int>(S1); // 자료형 써주고 -> 인자 써주고
    print_vector<float>(S2);
    print_vector<double>(S3);
    print_vector<char>(C);
    
    std::cout << "\n";
}

int main() {
    std::cin.tie(NULL); std::cin.sync_with_stdio(false);

    run_quick_sort_test();

    return 0;
}