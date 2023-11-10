#include <bits/stdc++.h>
using namespace std;

#define ALPHAS 26

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string S;
  cin >> S;

  int counter[ALPHAS] = {0, };

  for (int i = 0; i < S.size(); i++) {
    counter[(int)(S[i] - 'a')]++;
  }

  for (int i = 0; i < ALPHAS; i++) {
    cout << counter[i] << " ";
  }

  return 0;
}