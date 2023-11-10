#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> v;
  int n, sum = 0;
  int i = 0, j = 0;

  for (int i = 0; i < 9; i++) {
    cin >> n;
    sum += n;
    v.push_back(n);
  }

  // 2중 for문 탈출구문은 flag 변수 사용
  bool isFound = false;
  for (i = 0; i < v.size(); i++) {
    for (j = i + 1; j < v.size(); j++) {
      // 9개중에 2개 빼서 100인 케이스 찾고 인덱스 저장
      if (sum - v[i] - v[j] == 100) {
        isFound = true;
        break;
      }
    }

    if (isFound)
      break;
  }

  // 새로 배열 만들어서 제외할 인덱스 외 나머지 인덱스의 값을 저장
  vector<int> result;
  for (int idx = 0; idx < v.size(); idx++) {
    if (idx != i && idx != j)
      result.push_back(v[idx]);
  }

  // 정렬 후 출력
  sort(result.begin(), result.end());
  for (int e: result) {
    cout << e << "\n";
  }  

  return 0;
}