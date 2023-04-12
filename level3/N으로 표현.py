def solution(N, number):
    answer = -1
    
    if N==number: return 1

    operation_list = [[]] + [[int(str(N) * i)] for i in range(1, 9)]
    print(operation_list)
    
    for i in range(2, 9):
        for j in range(1, i):
            for a in operation_list[j]:
                for b in operation_list[i-j]:
                    operation_list[i].append(a+b)
                    operation_list[i].append(a-b)
                    operation_list[i].append(a*b)
                    if b != 0: operation_list[i].append(a//b)
        if number in operation_list[i]:
            return i
        operation_list[i] = list(set(operation_list[i]))
        
    return answer
