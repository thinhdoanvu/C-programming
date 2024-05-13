//cho n thanh pho va khoang cach giua cac cap thanh pho cho truoc
//hay dat k may chu tai k thanh pho sao cho khoang cach tu moi thanh pho den may chu bat ky la be nhat

#include<bits/stdc++.h>
#define maxdinh 4
using namespace std;

int mtk[maxdinh][maxdinh]={
    {0,10,7,6},
    {10,0,8,5},
    {7,8,0,12},
    {6,5,12,0}
};

// int mtk[maxdinh][maxdinh]={
//     {0,4,8,5},
//     {4,0,10,7},
//     {8,10,0,9},
//     {5,7,9,0}
// };

int k=2;

void init(int m[], int size, int value){
   for(int i=0; i<size; i++){
        m[i]=value;
   }
}

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<"  ";
    }
    cout<<endl;
}

void thu(int start){
    int dem=0;//so thanh pho duoc chon lam may chu
    int flag[maxdinh];
    init(flag,maxdinh,-1);//dinh chua xet
    inmang(flag,maxdinh);
    
    while(dem<k){
        
        int min=INT_MAX;
        int next;
        //chon dinh tiep theo la dinh gan nhat trong so cac dinh ket noi voi start
        for(int i=0; i<maxdinh; i++){
            if(min>mtk[start][i] && i!=start){
                min=mtk[start][i];
                next=i;
            }
        }
        cout<<"dinh tiep theo: "<<next<<", gia tri: "<<min<<endl;
        
        //tim khoang cach nho nhat trong so cac dinh co ket noi voi start va next: 2-0, 2-1
        int xanhat=INT_MIN;
        int posmax;
        for(int i=0; i<maxdinh; i++){
            //tim ra dinh vua ket noi voi start va next
            if(mtk[start][i]!=0 && mtk[next][i]!=0){//khong phai dinh start va next
                //tim ra dinh cac duong ket noi dai nhat den 1 trong 2: start/next
                if(xanhat < mtk[start][i] && flag[i]==-1){//xet start
                    xanhat=mtk[start][i];
                    posmax=i;
                }
                if(xanhat < mtk[next][i]){//xet next
                    xanhat=mtk[next][i];
                    posmax=i;
                }
            }
        }
        cout<<"dinh xa nhat: "<<posmax<<", gia tri: "<<xanhat<<endl;
        dem++;
        start=posmax;
        flag[posmax]=1;
        inmang(flag,maxdinh);
    }
    //in ra thanh pho duoc chon lam may chu
    cout<<k<<" thanh pho duoc chon: ";
    for(int i=0; i<maxdinh; i++){
        if(flag[i]!=-1){
            cout<<i<<" ";
        }
    }
}

int main(){
    thu(0);//xuat phat tu dinh dau tien la 0
    return 0;
}
