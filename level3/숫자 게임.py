from collections import deque
def solution(A, B):
    answer = 0
    
    A.sort()
    B.sort()
    a = deque(A)
    b = deque(B)
    
    while b:
        if(a[0] < b[0]):
            a.popleft()
            b.popleft()
            answer += 1
        else: b.popleft()
    
    
    return answer
