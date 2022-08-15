def dfs(numbers, index, target, plus):
    answer = 0
    plus1 = plus + numbers[index]
    plus2 = plus + numbers[index]*-1
    if (index==len(numbers)-1):
        if plus1 == target:
            return 1
        if plus2 == target:
            return 1
        else: return 0
    else:
        index += 1
        answer += dfs(numbers, index, target, plus1)
        answer += dfs(numbers, index, target, plus2)
        return answer

def solution(numbers, target):
    index = 0
    plus = 0
    answer = dfs(numbers, index, target, plus)
        
    return answer
  

'''
아래의 다른 사람 풀이를 보고 소름 돋았다... 난 아직 많이 멀었구나...
def solution(numbers, target):
    if not numbers and target == 0 :
        return 1
    elif not numbers:
        return 0
    else:
        return solution(numbers[1:], target-numbers[0]) + solution(numbers[1:], target+numbers[0])
'''
