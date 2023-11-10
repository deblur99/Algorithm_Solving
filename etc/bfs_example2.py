# BFS 2차원 배열 탐색 문제
# 1) 큐 만들어서 BFS로 최단 거리 탐색
# 2) 방향 배열 고려하기

from collections import deque

def solution(maps):
    answer = 0
    
    # 방향배열 -> 상하좌우
    dy = [-1, 1, 0, 0]
    dx = [0, 0, -1, 1]
    queue = deque([(0, 0)])
    
    while queue:
        y, x = queue.popleft()
        if y == len(maps)-1 and x == len(maps[0])-1:
            return maps[len(maps)-1][len(maps[0])-1]
        
        add_count = 0   # 아래 4개의 루프 동안 추가한 횟수
                        # 반복문이 다 돌았는데 추가를 못하면 -1 리턴
        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]
            
            if ny < 0 or nx < 0 or ny >= len(maps) or nx >= len(maps[0]):
                continue
            
            if maps[ny][nx] == 0:
                continue
            
            if ny > 0 or nx > 0 and maps[ny][nx] == 1:
                maps[ny][nx] += maps[y][x]
                queue.append((ny, nx))
                add_count += 1
            
            # debug
            if i == 3:
              print(add_count)
        
        if add_count == 0:
            print(queue, y ,x)
            return -1
    
    if maps[len(maps)-1][len(maps[0])-1] < 2:
        return -1
      

print(solution([[1,0,1,1,1],[1,0,1,0,1],[1,0,1,1,1],[1,1,1,0,0],[0,0,0,0,1]]))