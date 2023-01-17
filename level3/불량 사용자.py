from itertools import product
from collections import Counter

def solution(user_id, banned_id):
    answer = 0
    usr_ban_id = [[] for _ in range(len(banned_id))]
    
    for j in range(len(banned_id)):
        bid = banned_id[j]
        for uid in user_id:
            if len(bid)==len(uid):
                flag, i = 0, 0
                while i<len(uid):
                    if bid[i]!='*' and (bid[i]!=uid[i]):
                        flag = 1
                        break
                    i += 1
                if flag==0:
                    usr_ban_id[j].append(uid)
    
    total_li = list(product(*usr_ban_id))
    answer_li = []
    for li in total_li:
        dup_flag = 0
        if len(li)==len(set(li)):
            for j in range(len(answer_li)):
                if Counter(li)==Counter(answer_li[j]): dup_flag = 1
            if dup_flag==0: answer_li.append(li)
        
    answer = len(answer_li)
    return answer
