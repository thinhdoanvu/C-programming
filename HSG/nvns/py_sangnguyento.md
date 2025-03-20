```
import math as m
n = int(input("Nhap so luong snt: "))
a=[0]*(n)
# print(f"Day a: {a}")

for i in range(2,int(m.sqrt(n)),1):
    # print(f"\ni = {i}", end = "\n")
    for j in range(i*i,n,1):# so sanh j=i+1 vs i*i
        # print(f"j = {j}", end = " ")
        if a[j]!=0 and j%i==0:
            a[j]=1
            
for i in range(2,n,1):
    if a[i]==0:
        print(i,end=" ")
```
