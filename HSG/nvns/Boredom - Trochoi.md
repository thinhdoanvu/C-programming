Cho dãy số a0-an, Chọn 1 số ak và xóa tất cả các số liền trước (ak-1) và liền sau (ak+1).  
Mỗi 1 lần chọn 1 số ta được ak điểm.  
Hãy chọn cho đến khi ko còn số nào để xóa, sao cho tổng các lần chọn là lớn nhất.  
input-1:             
2                               
1 2                    
output-1:           
2                        

input-2: 
3
1 2 3 
output-2:  
4  

input-3: 
9  
1 2 1 3 2 2 2 2 3 
output-3: 
10 
 
Số nhỏ nhất của a[i] = 1  
```
n = int(input())
a = list(map(int, input().split()))

max_val = max(a)
count = [0] * (max_val + 1)

# Đếm số lần xuất hiện của mỗi phần tử
for num in a:
    count[num] += 1

dp = [0] * (max_val + 1)
print(dp)
dp[0] = 0
dp[1] = count[1] * 1
print(dp)

for i in range(2, max_val + 1):
    dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i)

print(dp[max_val])
```
