tc = int(input())
while tc:
    n = int(input())
    s = '4444'
    t = s
    ops = ['+', '-', '*', '/']
    ans = 'no solution'
    for f_op in ops:
        for s_op in ops:
            for t_op in ops:
                s = s[0] + f_op + s[1:]
                s = s[0:3] + s_op + s[3:]
                s = s[0:5] + t_op + s[5:]
                res = int(eval(s.replace('/', '//')))
                if res == n:
                    ans = s
                
                s = t
    
    if ans == 'no solution':
        print(ans)
    else:
        for ch in ans:
            print(ch, end=' ')
        print('= ' + str(n))
    tc -= 1
