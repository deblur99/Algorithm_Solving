#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  vector<int> v;
  int n;

  cin >> n;
  v.push_back(n);
  cin >> n;
  v.push_back(n);
  cin >> n;
  v.push_back(n);

  auto start = v.begin();
  auto end = v.end();
  sort(start, end);

  for (auto iter = start; iter != end; iter++)
    cout << *iter << " ";

  cout << "\n";

  return 0;
}