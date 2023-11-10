#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s1, s2;
  cin >> s1 >> s2;

  for (int i = 0; i < s1.size(); i++) {
    for (int j = 0; j < s2.size(); j++) {
      if (s1[i] == s2[j]) {
        // s1, s2 해당 요소 하나 지우고 다시 반복
        s1.erase(i, 1); i--;  // 다음 반복 때 인덱스 하나 올라가면 안되므로 감소 연산
        s2.erase(j, 1); // erase(인덱스, 개수) -> 인덱스로부터 개수만큼 요소 지우기
        break;
      }
    }
  }
  cout << s1.size() + s2.size();

  return 0;
}