def solution(s):
    answer = len(s)
    char = ' '
    
    tmp = len(s)
    for i in range(1, int((len(s)+1)/2)+1):
        char = s[:i]
        count = 1
        for j in range(i, len(s), i):
            comp = s[j:j+i]
            if(char == comp):
                count += 1
                if((j+i) >= len(s)):
                    print(count, len(str(count)), end = " ")
                    tmp -= (i*count-i-len(str(count)))
            else:
                if(count > 1):
                    print(count, len(str(count)), end = " ")
                    tmp -= (i*count-i-len(str(count)))
                char = comp
                count = 1
        print(i, tmp)
        if(tmp < answer):
            answer = tmp
        tmp = len(s)
            
    return answer
