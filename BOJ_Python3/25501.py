def recursion(s, l, r):
    global T
    T += 1
    if l >= r: return 1
    elif s[l] != s[r]: return 0
    else: return recursion(s, l+1, r-1)

def isPalindrome(s):
    return recursion(s, 0, len(s)-1)

N = int(input())


for i in range(N):
    S = input()
    global T
    T = 0
    print(isPalindrome(S), end=' ')
    print(T)
