# cook your dish here
for _ in range(int(input())):
    number = int(input())
    s = number * (number + 1) // 2;
    s -= 1;
    s += number;
    print(s)
