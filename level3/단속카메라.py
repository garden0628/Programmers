def solution(routes):
    answer = 0
    
    routes.sort(key=lambda x:x[1])
    fir, sec = routes[0][0], routes[0][1]
    answer += 1
    
    for i in range(1, len(routes)):
        if routes[i][0]<=sec:
            fir = routes[i][0]
        else:
            fir, sec = routes[i][0], routes[i][1]
            answer += 1
        
    return answer
