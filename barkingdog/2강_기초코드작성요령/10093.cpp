#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long A, B;
  cin >> A >> B;

  vector<long long> v;

  if (A <= B) {
    for (long long i = A+1; i < B; i++)
      v.push_back(i);
  } else {
    for (long long i = B+1; i < A; i++)
      v.push_back(i);
  }

  cout << v.size() << "\n";
  for (long long e: v) {
    cout << e << " ";
  }


  return 0;
}