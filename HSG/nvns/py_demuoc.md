Đếm các ước của 1 số cho trước
U(2) = {1,2} = 2  
U(6) ={1,2,3,6} = 4  

Gợi ý: phân tích thành tích các thừa số nguyên tố:a^i * b^j * c^k  
Số ước = (i+1)(j+1)(k+1)  
Ví dụ: 24 = 2^2 * 3 => số ước = (2+1)(1+1) = 6  
```
import math
list_prime = []

def sangnguyento(x):
    list_prime = [0]*(x+1)
    
    for i in range(2, int(math.sqrt(x)) + 1):
        if list_prime[i] == 0:  # i is a prime number
            for j in range(i*i, x+1, i):  # Mark all multiples of i as non-prime
                list_prime[j] = 1  # Mark non-prime
    # print(list_prime)
    
    # in ra day so nguyen to
    list_snt=[]
    for i in range(2, x, 1):
        if list_prime[i]==0:
            list_snt.append(i)
             
    return list_snt

# phan tich 1 so thanh cac thua so nguyen to 
def timuoc(x):
    ds_uoc=[]
    while x>1:
        for i in sangnt:
            if x%i==0:
                # print(i, end="*")
                ds_uoc.append(i)
                x=x//i
    # print(ds_uoc)
    # dem so uoc = tich(so lan lap lai +1) 
    # 100 = 2 2 5 5 = (2+1)*(2+1) = 9
    # 24 = 2 2 2 3 = (3+1)*(1+1) = 8 
    # dung phep dem phan phoi de tinh so lan lap lai cua moi boi snt 
    tam = max(ds_uoc)
    dem = [0]*(tam+1)
    for i in ds_uoc:
        dem[i] +=1
    
    # print(dem)
    # tinh tong uoc
    count=1
    for i in range(len(dem)):
        if dem[i]!=0:
            count*=(dem[i]+1)
    print(count)
    
if __name__ == "__main__":
    # Nhap du lieu
    n = int(input())
    list_number = []
    
    for i in range(n):
        list_number.append(int(input()))
    # print(list_number)
    
    # in ra bang 1 + so nguyen to toi da (MAX cua so vua nhap) 
    MAX = max(list_number) 
    # print(MAX) 
    
    sangnt = sangnguyento(MAX)
    # print(sangnt)
    
    # phan tich thua so nguyen to = cac uoc cua 1 so 
    for i in range(n):
        timuoc(list_number[i])
    ```
