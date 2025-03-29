#### Bài toán
Cho n bit, liet cac so nhi phan co do dai la n:  
1. Cac bit duoc phep lap lai: (n=3) 000, 001, 010 ... 111  
2. Cac bit khong trung lap: (n=3): 001 010 100 101 110 011 ...  
3. Co 3 so 123: 121 122 123 (Khong xuat hien: 111 222 333)  

#### Cách Quay lui = vet can: 
if (thoa dieu kien so bit can in =n):   
    in ket qua   
else:  
    lap lai ham try voi so bit tang len 1   

Ví dụ:  
n = 3     # so chu so/ky tu de cho ban dau: 1 2 3, a b c, 0 1, 1 4 5...  
a = [0,1] # day so nhi phan, trong TH3: 1,2,3  
res = [0]*(n) # day res co k phan tu, k dung de kiem tra chieu dai cua day = n bit?    

#### Code:  
```
def thu(i): # so phan tu cua res 0,1,2,3....
    if i==n:
        print(res, end="\n") # in ra day nhi phan co so phan tu la n
        return 
    # nguoc lai, lap day cac phan tu cho res lay tu day a 
    for j in range(len(a)):
        res[i] = a[j]
        thu(i+1)
    

if __name__=="__main__":
    thu(0) # bat dau la day res co 0 phan tu

```

<img width="87" alt="image" src="https://github.com/user-attachments/assets/a6c691c6-54d5-4a29-9ba3-6f94bdd6f0c0" />
