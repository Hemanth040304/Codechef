# cook your dish here
for _ in range(int(input())):
    n = int(input())
    # ans = 0
    # t = n
    # for i in range(n):
    #     if t:
    #         ans += i+1
    #         t -= 1
    #         if t:
    #             ans += i+1
    #             t -= 1
    #     else:
    #         break
    # print(ans)
    # if n%2==0:
    #     n //= 2
    #     s = n*(n+1)/2
    #     print(int(s)*2)
    # else:
    #     n += 1
    #     n //= 2
    #     t = n
    #     s = n*(n+1)/2
    #     print(int(s)*2-t)
    half = n // 2
    ans = half * (half + 1)
    if n % 2 == 1:
        ans += half + 1
    print(ans)
