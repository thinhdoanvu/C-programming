#### Bài toán

Cho 2 ky tu A,B. 
Hay liet ke cac day so co chieu dai la n=4 sao cho khong co BB canh nhau 
AAAA  
AAAB  
AABA  
ABAA  
ABAB  
BAAA  
BAAB  
BABA  

#### Code:  
```
n=4  
a=['A', 'B']  
res=[0]*n

def check():  
    for k in range(len(res)-1):  
        if res[k]=='B' and res[k+1]=='B':  
            return True  
    return False  

def thu(i):  
    if i == n:  
        if not check():  
            print(''.join(res))  
        return  
    
    for j in range(len(a)):  
        res[i] = a[j]  
        thu(i+1)  
    
if __name__ == "__main__":  
    thu(0)
```
