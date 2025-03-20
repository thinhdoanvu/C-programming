Hãy in ra màn hình hiệu số lớn nhất của dãy số a, trong đó:
i<=j, 
ai <<= aj
Ví dụ:
a=[2,1,3,7,0,5,4] => hiệu số max = 5  
a=[1,2,3] => hiệu số max = 1  
a=[2,5,1,3] => hiệu số max = 3  
```
a=[]
maxdif=0

def sln(l, start, stop):
    return max(l[start:stop+1])

def snn(l, start, stop):
    return min(l[start:stop+1])

def diff(left, right):
    global maxdif
    
    mid=(right+left)//2
    # print(f"mid = {mid}")
    # Dieu kien dung
    if left == right:
        return 0
        
    # maxdif = max ben phai - min ben trai
    SLN = sln(a,mid,right)
    SNN = snn(a,left,mid)
    # print(f"sln: {SLN}", end = " - ")
    # print(f"snn: {SNN}")
    maxdif = max(maxdif, SLN - SNN)
    # lap lai voi 2 day con 
    diff(0,mid)
    diff(mid+1,right)
    
    return maxdif

if __name__=="__main__":
    # n = int(input())
    # for i in range(n):
        # a.append(int(input()))
    
    # ICPC:
    n = int(input())
    a = list(map(int, input().split()))

    # a=[2,1,3,7,0,5,4]
    # a=[1,2,3]
    # a=[2,5,1,3]
    # n=len(a)
    # print(f"n = {n}, \na = {a}")
    
    # Timf max diff
    print(diff(0,n))
```
