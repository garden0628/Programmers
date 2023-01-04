from collections import deque
def solution(n, computers):
    answer = 0
    check = [1 for _ in range(n)]

    while True:
        if check.count(0)==n: break

        li = deque()
        idx = check.index(1)
        check[idx], computers[idx][idx] = 0, 0
        li.append(idx)

        while len(li)!=0:
            idx = li.popleft()
            for i in range(n):
                if computers[idx][i]==1:
                    li.append(i)
                    check[i], computers[idx][i], computers[i][idx] = 0, 0, 0
        answer += 1    
        
    return answer
