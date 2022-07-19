def solution(lottos, win_nums):
    count = 0
    for i in range(6):
        for j in range(6):
            if win_nums[i]==lottos[j]:
                count += 1
                break
                
    count_zero = 0
    for i in range(6):
        if lottos[i] == 0:
            count_zero += 1
            
    min = count
    max = count + count_zero
    
    if min<=1:
        min_seq = 6
    else:
        min_seq = 7-min
        
    if max<=1:
        max_seq = 6
    else:
        max_seq = 7-max
    answer = [max_seq, min_seq]
    return answer
