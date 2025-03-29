#### Bài toán:  
Cho cac so 1,2,3. Hay liet ke cac hoan vi cua chung sao cho moi so chi duoc lap lai dung 1 lan 
[1, 2, 3]  
[1, 3, 2]  
[2, 1, 3]  
[2, 3, 1]  
[3, 1, 2]  
[3, 2, 1]  

```
n=3
a=[1,2,3]
res=[0]*n 
close = [0]*n

def thu(i):
    if i == n:
        print(res, end="\n")
        return
    
    for j in range(len(a)):
        if close[j] == 0:
            res[i] = a[j]
            close[j] = 1
            thu(i+1)
            close[j]=0
if __name__ == "__main__":
    thu(0)
```
