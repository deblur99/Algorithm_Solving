#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  int time;
  int Y, M, temp;
  Y = M = temp = 0;
  for (int i = 0; i < N; i++) {
    cin >> time;

    temp = time;
    while (temp >= 0) {
      temp -= 30;
      Y += 10;
    }

    temp = time;
    while (temp >= 0) {
      temp -= 60;
      M += 15;
    }
  }

  // cout << Y <<  " " << M << "\n";

  if (Y == M)
    cout << "Y M " << Y;  
  else if (Y > M)
    cout << "M " << M;
  else
    cout << "Y " << Y;  



  return 0;
}