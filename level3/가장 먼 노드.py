from collections import deque
def solution(n, edge):
    answer = 0
    
    node = [[] for _ in range(n+1)]
    visit= [0]*(n+1)
    
    for left, right in edge:
        node[left].append(right)
        node[right].append(left)
        
    visit[1] = 1
    d = deque([1])
    
    while d:
        po = d.popleft()
        for val in node[po]:
            if visit[val]==0:
                visit[val] = visit[po] + 1
                d.append(val)
                
    length = max(visit)
    answer = visit.count(length)
    
    return answer
