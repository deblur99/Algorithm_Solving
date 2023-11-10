N, M = list(map(int, input().split()))
graph = []
for _ in range(N):
  graph.append(list(map(int, input())))


# 상 하 좌 우
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]

# Tip) 일반적인 그래프에서는 방문 테이블 만들어서 진행하는 편이 좋고,
# 2차원 배열 탐색에서는 방향 배열 가지고 탐색 범위 설정하면서
# 방문여부 또한 그래프에 표시하는 것이 좋다.
# ex) 갈 수 있음 - 0, 갈 수 없음 - 1, 이미 방문함 - 2,
#     최단경로 - 그래프에 계속 숫자 누적하여 현재 위치에 표시

# DFS vs BFS
# - 경로 개수 찾기, 붙어있는 것들 찾기 -> DFS
# - 최단 경로 찾기 -> BFS

def DFS(y, x):
  # 범위 설정
  if y < 0 or x < 0 or y >= N or x >= M:
    return 0
  
  # 벽이면 pass
  if graph[y][x] == 1:
    return 0
  
  # 이미 탐색했으면 pass
  if graph[y][x] == 2:
    return 0
  
  if graph[y][x] == 0:
    graph[y][x] = 2
    for i in range(4):
      DFS(y+dy[i], x+dx[i])
    return 1
  

answer = 0
for y in range(N):
  for x in range(M):
    answer += DFS(y, x)
print(answer)


# 테스트 케이스
'''
4 5
00110
00011
11111
00000
3

15 14
00000111100000
11111101111110
11011101101110
11011101100000
11011111111111
11011111111100
11000000011111
01111111111111
00000000011111
01111111111000
00011111111000
00000001111000
11111111110011
11100011111111
11100011111111
8

'''