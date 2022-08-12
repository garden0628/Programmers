def solution(number, k):
    num = list(map(int, number))
    tmp = []
    count = 0
    count2 = 1
    
    tmp.append(num[0])
    for i in range(1, len(num)):
        if count<k:
            while(1):
                if(tmp[-1] < num[i]):
                    del tmp[-1]
                    count += 1
                    count2 -= 1
                    if (count==k or len(tmp)==0):
                        if(count2<len(num)-k):
                            tmp.append(num[i])
                            count2 += 1
                        break    
                else:
                    if(count2<len(num)-k):
                        tmp.append(num[i])
                        count2 += 1
                    break
        else:
            if(count2 < len(num)-k):
                tmp.append(num[i])            
    
    answer = ''
    for i in range(len(tmp)):
        answer += str(tmp[i])
    
    return answer
  
  # 훨씬 더 간결하고 좋은 풀이를 보니 '난 아직 갈 길이 멀구나' 라는 걸 느낀다.
