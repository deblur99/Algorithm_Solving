# https://www.acmicpc.net/problem/1012

import sys
from collections import deque
input = sys.stdin.readline

T = int(input())

for _ in range(T):
  # N이 열의 개수
  # M이 행의 개수
  N, M, K = list(map(int, input().split()))
  graph = [[0]*N for _ in range(M)]
  result = 0
  # 이 문제는 2차원 배열에서 4방향 탐색하는 문제라서
  # 2차원 배열 그대로 그 위에서 탐색하면 된다.
  # 굳이 인접 리스트로 만들어줄 필요가 없다.
  
  for _ in range(K):
    X, Y = list(map(int, input().split()))
    graph[Y][X] = 1
  
  # 상하좌우  
  dy = [-1, 1, 0, 0]
  dx = [0, 0, -1, 1]
  
  for i in range(M):
    for j in range(N):
      # 방문할 수 없음 = 0
      # 방문할 수 있는데 아직 방문 안 함 = 1
      # 이미 방문함 = 2
      # 이렇게 정리하면서 BFS로 탐색할 수 있다.
      if graph[i][j] == 1:
        queue = deque([(i, j)])
        
        while queue:
          y, x = queue.popleft()  
        
          for k in range(4):
            ny = y + dy[k]
            nx = x + dx[k]
            
            if ny < 0 or nx < 0 or ny >= M or nx >= N:
              continue
            
            if graph[ny][nx] == 0:
              continue
            
            # 다음 위치가 유효한 값인지 확인하는 부분이 빠졌음!
            if graph[ny][nx] == 1:
              graph[ny][nx] = 2
              queue.append((ny, nx))
        
        result += 1
  
  print(result)
  
'''
1
3 3 6
0 0
1 1
2 2
0 2
2 0
1 2
'''