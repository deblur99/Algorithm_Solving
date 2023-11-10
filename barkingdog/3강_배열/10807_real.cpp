#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  vector<int> arr;
  int num;
  for (int i = 0; i < N; i++) {
    cin >> num;
    arr.push_back(num);
  }

  int v;
  cin >> v;

  int result = 0;
  for (int e: arr) {
    if (e == v) {
      result++;
    }
  }
  cout << result;

  return 0;
}