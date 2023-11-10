# 인접행렬 방식
INF = 999999999

graph = [
  [0, 7, 5],
  [7, 0, INF],
  [5, INF, 0]
]

print(graph)

# 인접리스트 방식
# -> 실전에서는 이 방식만 쓸 것이다.

# 1) 인접 리스트
# row -> 각각의 점
# col -> 각 점과 다른 점 사이의 연결 정보
graph = [[] for _ in range(3)]


# 인접 리스트 추가 시, 점 사이의 방향을 고려해야 한다.
# -> 무방향 그래프에서 한쪽 점을 다른 점과 연결하면, 반대쪽 점에서도 연결해줘야 한다.
#     (기본이 양방향 연결이다.)
# -> 방향 그래프에서는 방향 맞춰서 한쪽으로 연결해주면 된다.

# 노드 0에 대한 정보 저장
graph[0].append((1, 7))
graph[0].append((2, 5))

# 노드 1에 저장된 노드 정보 저장
graph[1].append((0, 7))

# 노드 2에 저장된 노드 정보 저장
graph[2].append((0, 5))

import random

# 그래프 초기화 (10개의 정점)
n = 10
graph = [[] for _ in range(n)]

# 각 노드당 0에서 3개의 연결 정보 추가
for i in range(n):
    num_connections = random.randint(1, 3)
    for _ in range(num_connections):
        to_node = random.randint(0, n - 1)
        weight = random.randint(1, 10)
        graph[i].append((to_node, weight))

# 2) 그래프 순회를 위한 방문 테이블
# 점 개수만큼 False로 초기화한다.
visited = [False for _ in range(n)]

def DFS(graph, v, visited):
  # 현재 노드를 방문 처리
  visited[v] = True
  print(v, end=' ')
  
  # 현재 노드와 연결된 다른 노드를 재귀적으로 방문
  for i in graph[v]:
    if not visited[i[0]]:
      DFS(graph, i[0], visited)


from collections import deque

def BFS(graph, v, visited):
  queue = deque([v])
  while len(queue) > 0:
    curr = queue.popleft()
    if visited[curr]:
      continue
    
    print(curr, end=' ')
    visited[curr] = True
    for i in graph[curr]:
      if not visited[i[0]]:
        queue.append(i[0])


DFS(graph, 0, visited)
print()
visited = [False for _ in range(n)]
BFS(graph, 0, visited)
print()