Cho chuỗi số xoắn ốc từ tâm ra ngoài theo chiều ngược kim đồng hồ  
5 4 3  
6 1 2  
7 8 9  
Tiếp theo cho các số, nhập tọa độ (x,y) và cho biết số tại đó là bao nhiêu:  
Ví dụ: (-1,1)=9, (1,2)=13  
```
#include<bits/stdc++.h>
int s,x,y;

int thu(int x, int y){
    if(x==0 && y==0){
        return 1;
    }
    if(x==-1 && y==0){
        return 6;
    }
    if(x==-1 && y==-1){
        return 7;
    }
    if(x==0 && y==0){
        return 8;
    }
    if(x==-1 && y==-1){
        return 9;
    }
    if(x==1 && y==0){
        return 2;
    }   
    if(x==1 && y==1){
        return 3;
    }
    if(x>1 && y==0){
        return thu(x-1,y)+8*(x-1)+1;
    }
    if(x>0 && y>0 && x>y){
        return thu(x,y-1)+1;
    }
    if(x>0 && y<0 && x==abs(y)){
        return pow((x+abs(y)+1),2);
    }
    if(x>0 && y<0 && x>abs(y)){
        return thu(x,y+1)-1;
    }
    if(x>0 && y>0 && x>=y){
        return thu(x,y-1)+1;
    }
    if(x>=0 && y>x){
        return thu(x+1, y)+1;
    }
    if(x<0 && y>0 && y>=abs(x)){
        return thu(x+1,y)+1;
    }
    if(x<0 && y>=0 && abs(x)>y){
        return thu(x,y+1)+1;
    }
    if(x<0 && y<0 && abs(x)>=abs(y)){
        return thu(x,y+1)+1;
    }
    if(x<=0 && y<0 && abs(x)<abs(y)){
        return thu(x-1,y)+1;
    }
    if(x>0 && y<0 && x<abs(y)){
        return thu(x-1,y)+1;
    }
}

int main(){
    cin>>x>>y;
    cout<<thu(x,y);
    return 0;
}
```
