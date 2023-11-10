#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // 같은 방에는 같은 성별, 같은 학년으로 배정해야 한다.
  int N, K;
  cin >> N >> K;

  // 학년별로 안에 성별 (1, 0)이 들어간다.
  
  // 자료구조 정리
  // 1) 학년
  // 2) 성별 (0, 1)
  // 3) 성별마다 인원수 (0이면 0, 1이면 1로 채움)
  vector<vector<vector<int> > > grades(6);
  for (int i = 0; i < 6; i++) {
    grades[i].resize(2);
  }

  int S, Y;
  for (int i = 0; i < N; i++) {
    cin >> S >> Y;
    grades[Y-1][S].push_back(S);
  }
  
  int answer = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 2; j++) {
      answer += ceil((double)(grades[i][j].size()) / K);
    }
  }

  cout << answer;

  return 0;
}