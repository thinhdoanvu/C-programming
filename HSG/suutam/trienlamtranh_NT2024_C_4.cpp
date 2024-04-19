//cho truoc mang a[]={20,30,10,50,40} la chi so hanh phuc cua cac buc tranh
//Hay sap xep cac buc tranh de chi so hanh phuc la lon nhat
//moi lan chuyen trang thai tu thap - cao thi chi so hanh phuc tang len 1
//in ra man hinh chi so hanh phuc lon nhat
//KQ: 4
//a[]={200 100 100 200}. KQ: 2

#include<iostream>
#define MAX 100000
using namespace std;

long long a[MAX];
long long n;
long long hp_index[MAX]={1};

void nhap(){
    cin>>n;
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
}

void in(long long m[], long long size){
    for(long long i=0; i<n; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void init(){
    for(long long i=0; i<n; i++){
        hp_index[i]=0;
    }
}

void thu(){
    sort(a, a+n);
    in(a,n);
    int dem=1;
    int long long count[MAX];
    int pos=0;
    //dem xem co bao nhieu lan lap lai
    for(long long i=0; i<n-1; i++){
        if(a[i]==a[i+1]){
            dem++;
        }
        else{
            count[pos++]=dem;
            dem=1;
        }
    }
  
    //cout<<"mang dem: ";
    //in(count,pos);
  
    //tim max
    int max=count[0];
    for(int i=1; i<pos; i++){
        if(max<count[i]){
            max=count[i];
        }
    }
    if(max==0){
        cout<<0;
        return;
    }
    cout<<n-max;
}


int main(){
    nhap();
    init();
    thu();
    return 0;
}
