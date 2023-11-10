# 책 152p
from collections import deque

N, M = list(map(int, input().split()))
graph = []
for _ in range(N):
  graph.append(list(map(int, input())))
  
queue = deque([(0, 0)])
visited = [[0]*M for _ in range(N)]
visited[0][0] = 1

# 상 하 좌 우
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]

while queue:
  y, x = queue.popleft()
  if y == N - 1 and x == M - 1:
    print(visited[y][x])
    break
  
  for i in range(4):
    ny = y + dy[i]
    nx = x + dx[i]
    
    # 범위 체크
    if ny < 0 or nx < 0 or ny >= N or nx >= M:
      continue
    
    # 벽 여부 체크
    if graph[ny][nx] == 0:
      continue
    
    # 이미 방문했는지 여부 체크
    if visited[ny][nx] != 0:
      continue
    
    visited[ny][nx] = visited[y][x] + 1
    queue.append((ny, nx))

if visited[N-1][M-1] == 0:
  print(-1)
else:
  print(visited[N-1][M-1])
  print(visited)  
  


'''
================
테스트 케이스
================
5 6
101010
111111
000001
111111
111111
'''