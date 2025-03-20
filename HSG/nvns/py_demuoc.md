Đếm các ước của 1 số cho trước
U(2) = {1,2} = 2  
U(6) ={1,2,3,6} = 4  

Gợi ý: phân tích thành tích các thừa số nguyên tố:a^i * b^j * c^k  
Số ước = (i+1)(j+1)(k+1)  
Ví dụ: 24 = 2^2 * 3 => số ước = (2+1)(1+1) = 6  
```
global ds, n, p, k

# khoi tao ds va n
ds = ""

if __name__ == "__main__":
    k, p = map(int, input().strip().split())
    n=2*(p+k)
    
    # tạo ra n số từ 1 trở đi
    for i in range(1, n + 1):
        ds = ds+str(i)  # Gán lại ds sau khi cộng chuỗi mới
    
    # print(ds)
    
    # so chu so can xoa
    count = 0
    i = 0 
    while i<len(ds)-1:
        if ds[i] < ds[i+1] and count <k:
            ds = ds.replace(ds[i],'')
            count += 1
            i=0 # reset i
        else:
            i=i+1    
        # print(ds)
    # in ra chu so thu p cua so lon nhat co duoc
    
    print(int(ds[p-1]))
    ```
