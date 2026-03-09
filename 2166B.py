# https://codeforces.com/problemset/problem/2166/B
# len = min(b,a/m)

t = int(input())
for _ in range(t):
    a, b, m = map(int, input().split())
    
    if b * m <= a or b == a:
        print(1)
    else:
        print(2)
