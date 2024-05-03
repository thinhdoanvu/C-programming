#include<algorithm>
#include <iostream>
using namespace std;
int a []= {200,100,100,20,20,50,50,50,50,20};
int n;
int m=170;
//int m=160;//khong doi duoc
int dem=0;

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<"  ";
    }
    
    cout<<endl;
}
int compare(int a, int b){
    return a>b;
}

int main(){
    n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n,compare);
    cout<<"mang sau khi sap xep:  ";
    inmang(a,n);
    cout<<"so tien doi duoc:  ";
    for(int i=0; i<n; i++){
        // cout<<"m=  "<<m<<endl;
        if(m>=a[i]){
        	dem=dem+1;
            cout<<a[i]<<"  ";
            m=m-a[i];
        }    
    }
    if(m==0){
    	cout<<endl<<"so to doi duoc:  "<<dem;
	}
	else{
		cout<<endl<<"khong doi duoc";
	}
    
    return 0;
}
