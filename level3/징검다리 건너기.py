from collections import deque

def solution(stones, k):
    answer = 0
    
    d = deque()
    out = []
    for i, val in enumerate(stones):
        while d and stones[d[-1]]<val:
            d.pop()
        d.append(i)
        
        if d[0] == i-k:
            d.popleft()
        if i >= k-1:
            out.append(stones[d[0]])
    answer = min(out)      
    return answer
