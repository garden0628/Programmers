import heapq

def solution(n, works):
    answer = 0
    
    for i in range(len(works)):
        works[i] *= -1
    heapq.heapify(works)
    
    while n>0:
        val = heapq.heappop(works)
        if val<0: val+=1
        heapq.heappush(works, val)
        n -= 1
    
    for val in works:
        answer += val**2
    return answer
