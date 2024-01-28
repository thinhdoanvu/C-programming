//sap xep bang phuong phap dem phan phoi
#include<bits/stdc++.h>

//khai bao bien
int c[100];//chua so luong xuat hien cua cac gia tri khong trung lap cua input
int input[]={1, 5, 2, 7, 3, 4, 4, 1, 5};
int n=9;
int k;
int output[100];

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void sort(){
    //di tim so lon nhat va nho nhat cua mang input
    int max=input[0];
    int min=input[0];
    for(int i=1; i<n; i++){
        max=(max<input[i])?input[i]:max;
        min=(min>input[i]?input[i]:min);
    }
    cout<<"max = "<<max<<",min = "<<min<<endl;
    //tinh k
    k=max-min+1;
    //khoi tao amng c[]
    for(int i=0; i<=k; i++){
        c[i]=0;
    }
    //tinh tan suat xuat hien cua cac so tu 0 toi max
    //tai so khong cho tu min?
    //trong truong hop min=0 thi khong sao, voi TH min=1 tro di thi 
    //phan tu c[0] se khuyet gia tri va phai tinh c[] bat dau tu 1
    for(int i=0; i<=max; i++){
        c[input[i]-min]++;
    }
    inmang(c,k);
    //tinh vi tri cua moi doan: trang 48 - Ho Si Dam
    for(int i=1; i<k; i++){
        c[i]=c[i-1]+c[i];
    }
    inmang(c,k);
    //chuyen gia tri sap xep vao output
    for(int i=0; i<n; i++)
    {
        output[c[input[i] - min] - 1] = input[i];
        c[input[i] - min]--;
    }
    inmang(output,k+1);
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    sort();
    return 0;
}