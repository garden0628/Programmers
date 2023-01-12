from collections import deque

def solution(gems):
    answer = [1, 100001]
    
    dic = {}
    non_dup = list(set(gems))
    length = len(non_dup)
    for val in non_dup:
        dic[val] = 0
    
    cur = deque()
    cnt = 0
    tmp = [1, 0]
    for i in range(len(gems)):
        if(dic[gems[i]] == 0): cnt+=1
        dic[gems[i]] += 1
        cur.append(gems[i])
        tmp[1] = i+1
        
        if cnt==length:
            while True:
                if (answer[1]-answer[0] > tmp[1]-tmp[0]):
                    answer[0], answer[1] = tmp[0], tmp[1]
                if (dic[cur[0]] == 1): break
                else:
                    val = cur.popleft()
                    dic[val] -= 1
                    tmp[0] += 1
    
    return answer
