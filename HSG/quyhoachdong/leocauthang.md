Gia đình Tí sống ở tầng thứ n (giả sử cấu trúc chung cư được đánh số từ tầng G, 1, 2, 3,...) của một chung cư trên địa bàn thành phố Nha Trang. 
Hằng ngày, để đi lên được nhà của mình, Tí đều sử dụng thang máy để di chuyển. tuy nhiên, hôm nay sau khi đi học về, Tí phát hiện ra rằng thang máy đang bảo trì nên bạn chỉ có thể đi bộ.  
Trong quá trình di chuyển, tí phát hiện ra rằng bạn chỉ có thể bước mỗi lần 1 hoặc 2 bậc cầu thang mà thôi.  
Bạn hãy tính xem Tí có bao nhiêu cách để đi bộ từ tầng G lên đến nhà của mình.  

Định dạng dữ liệu nhập:  
Nhập trên 1 dòng các số nguyên n m (1 <=n<=20, 10<m<=100) cách nhau 1 khoảng trắng.  

Định dạng dữ liệu xuất:  
In ra màn hình số cách leo cầu thang để bạn Tí có thể đi đến nhà của mình.  

Ví dụ:  
input-1:  
1 2  
output-1:  
2
input-2:  
1 4  
output-2:  
5
input-3:  
1 1  
output-3:  
1

```
def solve(n, m):
    total_steps = n * m
    if total_steps == 0:
        return 1
    if total_steps == 1:
        return 1
    f = [0] * (total_steps + 1)
    f[0] = 1
    f[1] = 1
    for i in range(2, total_steps + 1):
        f[i] = f[i - 1] + f[i - 2]
    return f[total_steps]

if __name__ == "__main__":
    n, m = map(int, input().split())
    print(solve(n, m))
```
