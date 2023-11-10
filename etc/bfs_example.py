# 책 152p

from collections import deque

# 열, 행
N, M = list(map(int, input().split()))
# 인접리스트
graph = []
for i in range(N):
  graph.append(list(map(int, input()))) # graph 받을 때는 input().split() 대신 input()을 써야 한다.
  
# 방문테이블
visited = [False] * N

# 이동할 네 방향 정의 (상, 하, 좌, 우)
# -> 2차원 배열에서 4방향, 또는 그 이상 탐색할 때에는
# dy, dx로 방향 배열 정해놓고 시작하는 게 매우 편하다.
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]


def BFS(x, y):
  # 큐 구현을 위해 deque 라이브러리 사용
  queue = deque([(x, y)])
  
  while queue:
    x, y = queue.popleft()
    
    for i in range(4):
      nx = x + dx[i]
      ny = y + dy[i]
      # 미로 찾기 공간을 무시한 경우 무시
      if nx < 0 or ny < 0 or nx >= N or ny >= M:
        continue
      # 벽인 경우 무시
      if graph[nx][ny] == 0:
        continue
      # 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
      if graph[nx][ny] == 1:
        graph[nx][ny] = graph[x][y] + 1
        queue.append((nx, ny))
  
  return graph[N-1][M-1] # 가장 오른쪽 아래까지의 최단 거리 반환


print(N, M)
print(graph)
print(visited)

print(BFS(0, 0))
