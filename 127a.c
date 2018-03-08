s=int(input())
b=int(input())
c=0
while True:
    s=s+1
    if s%2==0:
        d=0
    elif s>=b:
        break
    else:
        c+=1
print(c)
