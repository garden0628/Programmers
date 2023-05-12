import itertools

def solution(users, emoticons):
    answer = []
    
    prob = [10, 20, 30, 40]
    cases = list(itertools.product(prob, repeat=len(emoticons)))
    
    subscribe, total_sell = 0, 0
    for case in cases:
        sub, case_sell = 0, 0
        for user in users:
            user_sell = 0
            for i in range(len(case)):
                if case[i] >= user[0]:
                    user_sell += emoticons[i]*(100-case[i])//100
            if user_sell >= user[1]: sub += 1
            else: case_sell += user_sell
            
        if sub > subscribe:
            subscribe = sub
            total_sell = case_sell
        elif sub == subscribe:
            total_sell = max(total_sell, case_sell)
        else:
            continue
                    
    answer.append(subscribe)
    answer.append(total_sell)
    return answer
