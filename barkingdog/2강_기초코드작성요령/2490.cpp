#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, sum = 0;
  for (int i = 0; i < 3; i++) {    
    sum = 0;

    for (int j = 0; j < 4; j++) {
      cin >> n;
      sum += n;
    }
    // 도 -> 0 + 1*3 = 3 -> A
    // 개 -> 0*2 + 1*2 = 2 -> B
    // 걸 -> 0*3 + 1 = 1 -> C
    // 윷 -> 0*4 = 0 -> D
    // 모 -> 1*4 = 4 -> E
    cout << ((sum != 4) ? char('D' - sum) : 'E') << "\n";
  }

  return 0;
}