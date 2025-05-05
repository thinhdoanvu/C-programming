Trong giờ học lập trình, thầy giáo có cho một bài tập yêu cầu các bạn học sinh giải. Cụ thể đề bài cho trước một mảng S chứa các số nguyên có dạng S=[a_1, a_2,...,a_n], yêu cầu tìm một tích lớn nhất giữa các phần tử trong các mảng con của S. 
Biết rằng, ta có thể định nghĩa một mảng con là một tập hợp các phần tử liên tiếp trích từ mảng S ban đầu.  
Hãy viết chương trình giúp bạn học sinh giải toán trên.

#### Định dạng dữ liệu nhập:  
Dữ liệu nhập từ bàn phím có 2 dòng:  
- Dòng 1: một số nguyên duowng n (n<=50) là số lượng phần tử của mảng S.  
- Dòng 2: các phần tử là số nguyên của mảng S (Si in [-50,50]), các phần tử cachs nhau 1 dấu cách.  

#### Định dạng dữ liệu xuất:  
In ra trên màn hình 1 dòng duy nhất là tích lớn nhất giữa các phần tử nguyên trong mảng con của S.

#### Ví dụ:  
Input-1: 
3  
2 3 4  
Output-1:  
24

Input-2: 
3  
-2 3 4  
Output-2:  
12

```
n = int(input())
s = list(map(int, input().split()))

def max_product_dp(s):
    n = len(s)
    max_dp = [0] * n
    min_dp = [0] * n
    
    max_dp[0] = s[0]
    min_dp[0] = s[0]
    result = s[0]

    for i in range(1, n):
        max_dp[i] = max(s[i], s[i] * max_dp[i-1], s[i] * min_dp[i-1])
        min_dp[i] = min(s[i], s[i] * max_dp[i-1], s[i] * min_dp[i-1])
        result = max(result, max_dp[i])
    
    return result

print(max_product_dp(s))
```

#### 🔍 Ý tưởng chính (Quy hoạch động):  
Tại mỗi chỉ số i, ta lưu:  
max_dp[i]: tích lớn nhất của mảng con kết thúc tại vị trí i  
min_dp[i]: tích nhỏ nhất của mảng con kết thúc tại vị trí i  
Vì sao cần min_dp[i]? Vì nếu phần tử hiện tại là số âm, nhân với một tích nhỏ nhất (âm) trước đó sẽ ra số dương lớn.  
