def solution(triangle):
    answer = 0
    
    for i in range(len(triangle)-1):
        li = [0 for k in range(len(triangle[i+1]))]
        
        for j in range(len(triangle[i])):
            if (triangle[i+1][j]+triangle[i][j] > li[j]):
                li[j] = triangle[i+1][j]+triangle[i][j]
                
            if (triangle[i+1][j+1]+triangle[i][j] > li[j+1]):
                li[j+1] = triangle[i+1][j+1]+triangle[i][j]
        triangle[i+1] = li
            
    answer = max(triangle[len(triangle)-1])
    return answer
