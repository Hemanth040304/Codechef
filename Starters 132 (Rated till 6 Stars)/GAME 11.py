# https://www.codechef.com/problems/GAME_XI?tab=statement

def doIt():
    bat, ball = map(int,input().split())
    batsmens = list(map(int,input().split()))
    bowlers = list(map(int,input().split()))
    batsmens.sort()
    bowlers.sort()
    batsmens = batsmens[::-1]
    bowlers = bowlers[::-1]
    ans = 0
    if(len(batsmens) + len(bowlers) < 11 or len(batsmens) < 4 or len(bowlers) < 4):
        print(-1)
    else:
        for i in range(4):
            ans += batsmens[i]
        for j in range(4):
            ans += bowlers[j]
        store = batsmens[4:] + bowlers[4:]
        store.sort()
        store = store[::-1]
        for i in range(3):
            ans += store[i]
        print(ans)

for _ in range(int(input())):
    doIt()
