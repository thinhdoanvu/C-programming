//N(<10000) doan con [ai-bi], tim X de thuoc nhieu doan con nhat
//N=5: [0,10] [2,3] [4,7] [3,5] [5,8]
//X=5 thuoc ve 4 doan: [0,10] [4,7] [3,5] [5,8]
#include<bits/stdc++.h>
//khai bao bien
struct doan{
    int a;
    int b;
};

struct doan d[]={0,10,2,3,4,7,3,5,5,8,4,6};
int n;
int m_dem[1000]={0};//dem so doan chong len nhau, toi da la n phan tu

void inmang(int c[], int size){
    for(int i=0; i<size; i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

void thu(){
    //tim so lon nhat cua d.a va d.b == so phan tu cua mang m_dem
    int max;
    //tim tren a
    max=d[0].a;
    for(int i=1; i<n; i++){
        max=(max<d[i].a)?d[i].a:max;
    }
    //tim tren b
    for(int i=0; i<n; i++){
        max=(max<d[i].b)?d[i].b:max;
    }
    cout<<"so phan tu cua mang dem: "<<max<<endl;
    for(int i=0; i<n; i++){//n doan thang
        for(int j=d[i].a; j<=d[i].b; j++){
            m_dem[j]++;
        }
    }
    cout<<"mang dem chua cac doan chong len nhau: ";
    inmang(m_dem,max);
    //in ra gia tri cua X
    int ln=m_dem[0];
    int X=0;
    for(int i=1; i<max; i++){
        if(ln<m_dem[i]){
            ln=m_dem[i];
            X=i;
        }
    }
    cout<<"X = "<<X<<endl;
    //in ra cac doan ma X thuoc ve
    for(int i=0; i<max; i++){
        if(d[i].a <=X && X<=d[i].b){
            cout<<d[i].a<<","<<d[i].b<<endl;
        }
    }
}



//chuong trinh chinh
int main(){
    n=sizeof(d)/sizeof(d[0]);
    thu();
    return 0;
}