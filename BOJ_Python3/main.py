# baekjoon 11726

import sys

def main():
    N = int(sys.stdin.readline())
    dp = [0 for _ in range(N + 1)]
    dp[0] = 1
    dp[1] = 1
    for i in range(2, N + 1):
        dp[i] = dp[i - 1] + dp[i - 2]
    print(dp[N] % 10007)

if __name__ == '__main__':
    main()
