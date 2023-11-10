#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string N;
  cin >> N;

  vector<int> counter(10, 0);
  
  // N[i]는 char 타입 -> 이를 인덱스로 변환
  // (int)(char - '0') 하면 된다.
  // 그거의 밖으로 접근하려면?
  for (int i = 0; i < N.size(); i++) {
    counter[(int)(N[i]-'0')] += 1;
  }

  // 9 개수를 6에 합치기
  // 집계할 때는 6은 2개씩 1세트로 센다.
  counter[6] += counter[9];

  int total = 0;
  for (int i = 0; i < 9; i++) {
    if (i != 6) {
      if (total < counter[i]) {
        total = counter[i];
      }
    } else {
      if (total < ceil((double)(counter[i]) / 2)) {
        total = ceil((double)(counter[i]) / 2);
      }
    }
  }

  //debug
  // for (int i = 0; i < 10; i++) {
  //   cout << counter[i] << " ";
  // }
  // cout << "\n";

  cout << total << "\n";

  return 0;
}