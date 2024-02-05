//cho truoc N so nguyen, viet vien tiep cac so nguyen de co so MAX
//vi du N=5: 123 124 56 90 -> MAX = 9056124123
#include<bits/stdc++.h>
#include<string.h>

//khai bao bien
int n;
struct day{
    string val;
};
struct day a[]={"123","124","56","90"};

int compare(int x, int y) {
    return x<y;
}

void swap(day *x, day *y){
    day tam=*x;
    *x=*y;
    *y=tam;
}

void sapxep(){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int res=compare(stoi(a[i].val + a[j].val),stoi(a[j].val + a[i].val));
            if(res==1){
                swap(&a[i],&a[j]);
            }
        }
    }
    //in lai danh sach
    cout<<"Day so can tim: ";
    for(int i=0; i<n; i++){
        cout<<a[i].val;
    }
}
//chuong trinh chinh
int main(){
    n=sizeof(a)/sizeof(a[0]);
    sapxep();
    return 0;
}
