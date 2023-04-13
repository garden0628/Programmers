from collections import deque

def solution(sequence):
    answer = 0
    length = len(sequence)
    dp1, dp2 = [0]*length, [0]*length
    dp1[0], dp2[0] = sequence[0], -sequence[0]
    
    if length == 1: return max(dp1[0], dp2[0])

    parse = -1
    for i in range(1, length):
        num1, num2 = sequence[i]*parse, sequence[i]*(-parse)
        dp1[i] = max(num1, dp1[i-1]+num1)
        dp2[i] = max(num2, dp2[i-1]+num2)
        parse *= -1
    
    answer = max(max(dp1), max(dp2))
        
    return answer
