def solution(record):
    uid = []
    action = []
    
    for i in range(len(record)):
        info = record[i].split(' ')
        tmp = []
        name = []
        if(info[0] == 'Enter'):
            name.append(info[1])
            name.append(info[2])
            uid.append(name)
            
            tmp.append(info[1])
            tmp.append(info[0])
            action.append(tmp)
        elif(info[0] == 'Leave'):
            tmp.append(info[1])
            tmp.append(info[0])
            action.append(tmp)
        else:
            name.append(info[1])
            name.append(info[2])
            uid.append(name)
            '''
            for j in range(len(uid)):
                if(info[1] == uid[j]):
                    name[j] = info[2]
            '''
    
    answer = []
    dic = dict(uid)
    for k in range(len(action)):
        user = dic[action[k][0]]\

        if(action[k][1] == 'Enter'):
            answer.append(user+"님이 들어왔습니다.")
        else:
            answer.append(user+"님이 나갔습니다.")
    
    return answer
