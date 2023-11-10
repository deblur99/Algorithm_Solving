#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  string s1, s2;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout << (s1 == s2 ? "Possible" : "Impossible") << "\n";
  }

  return 0;
}