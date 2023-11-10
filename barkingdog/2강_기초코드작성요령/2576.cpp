#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> odds;
  int n;

  for (int i = 0; i < 7; i++){
    cin >> n;
    if (n % 2 == 1)
      odds.push_back(n);
  }

  if (odds.empty()) {
    cout << -1 << "\n";
    return 0;
  }

  int sum = 0;
  for (int e: odds) {
    sum += e;
  }
  cout << sum << "\n";
  
  sort(odds.begin(), odds.end());
  cout << odds.front() << "\n";

  return 0;
}