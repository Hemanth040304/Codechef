# https://www.codechef.com/problems/WEPCH?tab=statement 
#  Starters 117 


import math
def fun(h,x,y1,y2,k):
    hit,laser,temp = 0,0,h
    hit = math.ceil(h/y1)
    if hit > k:
        hit = k
        h -= y1*hit
        hit += math.ceil(h/y2)
    laser = math.ceil(temp/x)
    print(min(hit,laser))


t = int(input())
while t:
    h,x,y1,y2,k = map(int,input().split())
    fun(h,x,y1,y2,k)
    t-=1
