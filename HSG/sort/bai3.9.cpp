//tong khoang cach P(xp,yp) va Q(xq,yq)
#include<bits/stdc++.h>
//khai bao bien
struct toado{
    int x;
    int y;
};

//struct toado td[]={3,1,1,3,5,4,4,5,5,5};
struct toado td[]={3,7, 1,5, 7,3, 2,7, 5,2, 7,1};

int n;

void intd(){
    for(int i=0; i<n; i++){
        cout<<td[i].x<<","<<td[i].y<<endl;
    }
}
//sap xep toa do cac dinh theo x
int compx(toado a, toado b){
    return a.x < b.x;
}

int compy(toado a, toado b){
    return a.y < b.y;
}

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void timxy(){
    int xA[]={0};
    int yA[]={0};
    //cout<<"Toa do sau khi sap xep theo x"<<endl;
    //tim xA
    sort(td,td+n,compx);
    //intd();
    int demx=0;
    if(n%2!=0){
        xA[demx++]=td[n/2].x;
    }
    else{
        for(int i=td[n/2-1].x; i<=td[n/2].x; i++){
            xA[demx++]=i;
        }
    }
    cout<<"xA: ";
    inmang(xA,demx);

    //tim yA
    //cout<<"Toa do sau khi sap xep theo y"<<endl;
    sort(td,td+n,compy);
    //intd();
    int demy=0;
    if(n%2!=0){
        yA[demy++]=td[n/2].y;
    }
    else{
        for(int i=td[n/2-1].y; i<=td[n/2].y; i++){
            yA[demy++]=i;
        }
    }
    //in mang
    cout<<"yA: ";
    inmang(yA,demy);
}

//chuong trinh chinh
int main(){
    n=sizeof(td)/sizeof(td[0]);
    //intd();
    timxy();
    return 0;
}