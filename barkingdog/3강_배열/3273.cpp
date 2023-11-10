#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int result = 0;

  // input
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int x;
  cin >> x;

  sort(v.begin(), v.end());

  int left, right, sum;
  left = 0; right = v.size() - 1;

  while (left < right) {
    sum = v[left] + v[right];

    // 두 수의 합에서의 투 포인터는 양쪽 포인터가 양끝에서 출발해야 한다.
    // 이때 탐색 대상인 배열은 오름차순으로 정렬되어 있어야 한다.
    // 그래야 왼쪽 포인터가 오른쪽으로 이동할때 두 수의 합이 증가하고,
    // 오른쪽 포인터가 왼쪽으로 이동할때 두 수의 합이 감소한다.
    
    // + 부분합 구하는 문제와의 비교
    // -> 부분합은 왼쪽 오른쪽 포인터 모두 맨 왼쪽에서부터 시작한다.
    // 반면 두 수의 합은 양 끝에서 진행한다.
    // 그리고, 두 수의 합과 달리 부분합에서는 반드시 정렬할 필요는 없다.
    
    // 왼쪽이 오른쪽을 만나면 종료한다.
    if (sum == x) {
      result++;
      left++; // 결과값 찾으면 왼쪽 포인터 up
    } else if (sum < x) {
      left++;
    } else {
      right--;
    }
  }

  cout << result << "\n";

  return 0;
}