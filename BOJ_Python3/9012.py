T = int(input())

for i in range(T):
    S = list(input())
    Slen = len(S)
    j = 0

    while j < len(S):
        if S[j] == ')':
            if '(' not in S[:S.index(S[j]) + 1]:
                j += 1
                break
            else:
                S.remove('(')
                S.remove(')')
                j -= 1
        else:
            j += 1
    if len(S) == 0:
        print('YES')
    else:
        print('NO')
