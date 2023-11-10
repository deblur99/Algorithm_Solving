#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> v;
  int n;

  for (int i = 0; i < 5; i++) {
    cin >> n;
    v.push_back(n);
  }

  int sum = 0;
  for (int e: v) {
    sum += e;
  }
  cout << sum / v.size() << "\n";

  sort(v.begin(), v.end());
  cout << v[v.size()/2] << "\n";  

  return 0;
}