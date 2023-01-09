import math

def solution(n, stations, w):
    answer = 0
    
    idx, i, blank = 0, 1, 0
    while(idx < len(stations)):
        if(i < stations[idx]-w):
            answer += math.ceil((stations[idx]-w-i) / (2*w+1))
        i = stations[idx]+w+1
        idx += 1
        
    if(i<=n):
        answer += math.ceil((n-i+1) / (2*w+1))
    
    return answer
