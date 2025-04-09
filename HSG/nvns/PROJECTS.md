'''
n: số lượng dự án  
ai, pi, pi: ngày bắt đầu, ngày kết thúc, phần thưởng  
output: số phần thưởng tối đa kiếm được  

input-1  
4  
2 4 4   
3 6 6   
6 8 2   
5 7 3  

```
n = int(input())
a=[]
for i in range(n):
    a.append(list(map(int, input().split())))
    
# print(a)

# Su dung giai thuat tham lam, sap xep tang dan theo ngay bat dau
sorted_a = sorted(a, key=lambda x: x[1])
# print(sorted_a)

# Chon cong viec dau tien: 
MIN = min(sorted_a, key=lambda x: x[0])[0]
MAX = max(sorted_a, key=lambda x: x[1])[1]
# print(f"MIN={MIN}, MAX={MAX}")
i = 0
stop = sorted_a[0][1]
pt = sorted_a[0][2]
# print(f"stop = {stop}, pt = {pt}")

for i in range(1,n,1):
    if sorted_a[i][0] > stop: # thoi diem bat dau >= ket thuc truoc do 
        pt += sorted_a[i][2] # cap nhat phan thuong
        stop = sorted_a[i][1] # cap nhat thoi diem stop tiep theo
        # print(f"stop = {stop}, pt = {pt}")
print(pt)
```
