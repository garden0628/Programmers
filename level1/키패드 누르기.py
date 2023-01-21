def solution(numbers, hand):
    two = [3, 1, 0, 1, 2, 1, 2, 3, 2, 3, 4]
    five = [2, 2, 1, 2, 1, 0, 1, 2, 1, 2, 3]
    eight = [1, 3, 2, 3, 2, 1, 2, 1, 0, 1, 2]
    zero = [0, 4, 3, 4, 3, 2, 3, 2, 1, 2, 1]
    
    answer = ''
    left = 10
    right = 10
    for i in range(len(numbers)):
        if numbers[i]==1 or numbers[i]==4 or numbers[i]==7:
            answer += 'L'
            left = numbers[i]
        elif numbers[i]==3 or numbers[i]==6 or numbers[i]==9:
            answer += 'R'
            right = numbers[i]
        elif numbers[i]==2:
            if two[left]>two[right]:
                answer += 'R'
                right = numbers[i]
            elif two[left]<two[right]:
                answer += 'L'
                left = numbers[i]
            else:
                if hand == "right":
                    answer += 'R'
                    right = numbers[i]
                else:
                    answer += 'L'
                    left = numbers[i]
        elif numbers[i]==5:
            if five[left]>five[right]:
                answer += 'R'
                right = numbers[i]
            elif five[left]<five[right]:
                answer += 'L'
                left = numbers[i]
            else:
                if hand == "right":
                    answer += 'R'
                    right = numbers[i]
                else:
                    answer += 'L'
                    left = numbers[i]
        elif numbers[i]==8:
            if eight[left]>eight[right]:
                answer += 'R'
                right = numbers[i]
            elif eight[left]<eight[right]:
                answer += 'L'
                left = numbers[i]
            else:
                if hand == "right":
                    answer += 'R'
                    right = numbers[i]
                else:
                    answer += 'L'
                    left = numbers[i]
        elif numbers[i]==0:
            if zero[left]>zero[right]:
                answer += 'R'
                right = numbers[i]
            elif zero[left]<zero[right]:
                answer += 'L'
                left = numbers[i]
            else:
                if hand == "right":
                    answer += 'R'
                    right = numbers[i]
                else:
                    answer += 'L'
                    left = numbers[i]
    
    return answer
