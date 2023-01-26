from collections import deque
def solution(begin, target, words):
    answer = 0
    if target not in words: return answer
    
    li = deque([begin])
    while True:
        answer += 1
        tmp = deque()
        for _ in range(len(li)):
            word = li.popleft()
            
            for i in range(len(words)):
                cnt = 0
                for j in range(len(word)):
                    if word[j] == words[i][j]: cnt+=1
                if cnt == (len(word)-1): tmp.append(words[i])
        li = tmp
        if target in li: break
        
    return answer
