#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> arr(20);
  for (int i = 0; i < 20; i++) {
    arr[i] = i+1;
  }

  int left, right;
  int temp;
  for (int i = 0; i < 10; i++) {
    cin >> left >> right;
    left--; right--;
    // 왼쪽과 오른쪽 사이의 거리가 1인 경우일 때 바뀌지 않아서 실패한 것
    // 엣지 케이스를 주의하자.
    // -> 범위 계산할 때 (오른쪽 - 왼쪽) / 2한 값을 올림하고 그 범위를 포함하면 해결된다.
    for (int j = 0; j <= ceil((right - left) / 2); j++) {
      temp = arr[left + j];
      arr[left + j] = arr[right - j];
      arr[right - j] = temp;
    }
  }

  for (int e: arr) {
    cout << e << " ";
  }

  return 0;
}