Cho 1 dãy số gồm (N<=1000) phần tử, mỗi phần tử có 1 giá trị nằm trong khoảng [-10^9 .. 10^9]. Ban đầu, bạn sẽ ở vị trí ô số 0 với tổng điểm là 0.  
Mỗi nước đi, người chơi có thể di chuyển sang phải tối thiểu là 1 bước và tối đa là K (K<=100) bước. Khi dừng lại ở 1 ô nào đó thì giá trị của ô đó sẽ được cộng vào tổng điểm.  
Bạn có thể dừng cuộc chơi bất cứ lúc nào. Hãy tìm cách chơi sao cho tổng điểm nhận được là nhiều nhất.  

Dữ liệu vào:
Dòng đầu tiên chứa 2 số N và K.  
Dòng thứ 2 chứa N số của dãy, mỗi số cách nhau 1 dấu cách.  

Kết quả:  
Số điểm lớn nhất có thể đạt được.  
```
Dữ liệu nhập 1:  
5 2  
-2 3 -6 -4 5  
Kết quả ví dụ 1:  
4
```
```
def solve(n,k):
    if n==0 or n==1:
        return n
    
    f=[0]*(n+1)
    start=0
    stop=start+k
    # child = s[start:stop+1]
    # child=s[4:5]
    # print(child)
    for i in range(n):
        child = s[start:stop]
        # print(f"start={start}, stop={stop},max = {max(child)}")
        f[i]=f[i-1]+max(child)
        start=s.index(max(child))+1
        if start>=n:
            break
        else:
            stop=start+k
            
    return max(f)

if __name__=="__main__":
    n,k = map(int, input().split())
    s=list(map(int, input().split()))
    # print(s)
    print(solve(n,k))
```
