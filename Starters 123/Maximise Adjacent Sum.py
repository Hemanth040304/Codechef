# cook your dish here
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    ans = 0
    ans += sum(a[:2])
    ans += sum(a[2:])*2
    print(ans)
