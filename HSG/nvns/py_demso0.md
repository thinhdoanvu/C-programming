Đếm số 0 tận cùng bên phải của n!
5! = 1
10! = 1
12! = 2
```
global ds_gt

def giaithua(x):
    for i in range(2, x + 1):
        ds_gt[i] = i * ds_gt[i - 1]
    return ds_gt[x]

if __name__ == "__main__":
    n = int(input())
    ds_gt = [1] * (n + 1)
    giaithua(n)
    print(ds_gt[len(ds_gt)-1])
    
    # dem so 0 tan cung
    t = ds_gt[len(ds_gt)-1]
    count = 0
    while t%10 == 0:
        count +=1
        t=t//10
    print(count)
    ```
