Bạn có n đồng xu với n gia trị. Hãy tìm tất cả các khoản tiền từ n đồng xu này  
Ví dụ: 
n = 4 
4 2 5 2  
Kết quả: 2 4 5 6 7 8 9 11 13  
```
//liet ke day nhi phan n bit
//n=3: 000 001 010 ... 111
#include<bits/stdc++.h>
#define MAX 10
using namespace std;

//khai bao bien
int a[]={0,1};
int res[MAX];
int n;
int money[MAX];
int sotien[100];
int dem=0;//so phan tu cua day sotien

void nhap(){
    cout<<"Nhap lan luot menh gia: ";
    for(int i=0; i<n; i++){
        cin >>money[i];
    }
}

void inmang(){
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<money[i]<<" ";
    }
    cout<<endl;
}

void tongtien(){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+money[i]*res[i];
    }
    cout<<sum<<endl;
    //luu tong tinh duoc vao mang
    sotien[dem++]=sum;
}

void thu(int i){
    if(i==n){
        inmang();//in ra day so nhi phan
        tongtien();//in ra cac truong hop co the tinh tong tu cac menh gia do
        
        return;
    }

    //duyet cac cap nhi phan
    for(int j=0; j<2; j++){
        res[i]=a[j];
        thu(i+1);
    }
}

void ketqua(){
    cout<<"Tong so tien co the co: "<<endl;
    // for(int i=0; i<dem; i++){
    //     cout<<sotien[i]<<" ";
    // }
    // cout<<endl;
    sort(sotien,sotien+dem);
    for(int i=0; i<dem; i++){
        cout<<sotien[i]<<" ";
    }
    cout<<endl;
    //in ra cac tong ko trung nhau
    for(int i=0; i<dem; i++){
        if(sotien[i]!=0 && sotien[i]!=sotien[i+1]){
            cout<<sotien[i]<<" ";    
        }
    }
}

//chuong trinh chinh
int main(){
    cout<<"Nhap n = "; cin>>n;
    nhap();
    thu(0);
    ketqua();
    return 0;
}
```
![image](https://github.com/user-attachments/assets/7ba06de3-1de2-4180-825a-c2e001e03312)
