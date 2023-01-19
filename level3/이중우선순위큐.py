import heapq

def solution(operations):
    answer = []
    
    heap = []
    for op in operations:
        if op[0] == 'I':
            num = int(op[2:])
            heapq.heappush(heap, num)
        else:
            if op[2] == '-':
                if heap: heapq.heappop(heap)
            else:
                if heap:
                    heap = heapq.nlargest(len(heap), heap)[1:]
                    heapq.heapify(heap)
        
    if heap:
        answer.append(max(heap))
        answer.append(min(heap))
    else:
        answer.append(0)
        answer.append(0)
    return answer
