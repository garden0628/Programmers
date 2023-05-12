def counting(lists, pos, cap):
    for _ in range(cap):
        lists[pos] -= 1
        if lists[pos]==0:
            while lists[pos]==0:
                pos -= 1
                if pos < 0:
                    return -1
    return pos

def solution(cap, n, deliveries, pickups):
    answer = 0
    
    deliver_pos = n-1
    pickup_pos = n-1
    
    while deliver_pos>=0 and deliveries[deliver_pos]==0:
        deliver_pos -= 1
    while pickup_pos >=0 and pickups[pickup_pos]==0:
        pickup_pos -= 1
        
    while deliver_pos>=0 or pickup_pos>=0:
        answer += max(deliver_pos+1, pickup_pos+1)*2
        deliver_pos = counting(deliveries, deliver_pos, cap)
        pickup_pos = counting(pickups, pickup_pos, cap)
    
    return answer
