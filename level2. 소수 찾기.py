from itertools import permutations
import math

def solution(numbers):
    answer = 0
    
    num = list(numbers)
    number = []
    for i in range(len(num)):
        number.append(int(num[i]))
        
    for i in range(2, len(num)+1):
        tmp = list(permutations(num, i))
        for j in range(len(tmp)):
            number.append(int("".join(tmp[j])))
    
    number.sort()
    max = number[len(number)-1]
    array = [True for i in range(max+1)]
    prime = []
    
    
    for i in range(2, int(math.sqrt(max))+1):
        if array[i] == True:
            j = 2
            while i*j <= max:
                array[i*j] = False
                j += 1

    for i in range(2, max+1):
        if array[i]==True:
            prime.append(i)
    
    number = list(set(number))
    for i in range(len(number)):
        for j in range(len(prime)):
            if number[i]==prime[j]:
                answer += 1
    
    return answer
