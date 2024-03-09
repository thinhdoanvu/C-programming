//cho truoc cac to tien co menh gia khac nhau: a[N]
//cho so tien can doi: M
//hay doi M thanh cac {ai}
//in ra tat ca phuong an doi duoc
#include<bits/stdc++.h>
#define MAX 1000
#define INPUT "doitien.inp"

//khai bao bien
FILE *fp;
int M,N;
int C[MAX];
int x[MAX];//luu tru cac phuong an doi tien (toi da la N to)
int CLOSE[MAX];//danh dau to nao da duoc doi
//danh cho nhanh can
int sum=0;
int soto=0;
int sotobest;//truong hop xau nhat la doi het to tien dang co
int bestsolution[MAX];
int dem=0;


//chuong trinh con
void init(int m[], int size, int value){
    for(int i=0; i<size; i++){
        m[i]=value;
    }
}

void qsort(int m[], int L, int R) {
    int i = L;
    int j = R;
    int mid = m[(L + R) / 2]; //chon phan tu o giua thay vi m=(L+R)/2
    //phan doan mang
    while (i <= j) {
        while (m[i] > mid) {//sap xep thep thu tu giam dan
            i++;
        }
        while (m[j] < mid) {
            j--;
        }
        if (i <= j) {
            int tam=m[i];
            m[i]=m[j];
            m[j]=tam;
            i++;
            j--;
        }
    }
    //de quy cho cac mang con
    if (L < j) {
        qsort(m, L, j);
    }
    if (i < R) {
        qsort(m, i, R);
    }
}

void inmang(int m[], int size){
    for(int i=0; i<size; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void readfile(){
    fp=fopen(INPUT,"r");
    if(fp==NULL){
        printf("file not found");
        return;
    }
    //doc so to tien
    fscanf(fp,"%d",&N);
    //doc so tien can doi
    fscanf(fp,"%d",&M);
    //doc menh gia cua cac to tien
    for(int i=0; i<N; i++){
        fscanf(fp,"%d",&C[i]);
    }
    fclose(fp);
    //in ra cac gia tri
    cout<<N<<" "<<M<<endl;
    inmang(C,N);
}

void inketqua(){
    cout<<endl<<"so to can doi: "<<soto<<" - ";
    for(int i=0; i<N; i++){
        if(x[i]!=-1){
            cout<<C[x[i]]<<" ";
        }
    }
    cout<<endl;
}

void update(){
    if(sotobest > soto){
        sotobest=soto;
        for(int i=0; i<N; i++){
            bestsolution[i]=x[i];
        }
    }
    cout<<"so to best: "<<sotobest<<endl;
}

int timmax(){
    int sln=INT_MIN;
    int pos;
    for(int i=0; i<N; i++){
        if(CLOSE[i]==0){
            if(sln<C[i]){
                sln=C[i];
                pos=i;
            }
        }
    }
    return pos;
}

void thu(int idx){
    dem++;//dem xem co bao nhieu lan thu
    if(sum == M){
        //inketqua();
        update();//nhanh can
        return;
    }
    //dk cat tia: so to 
    if(soto + (M - sum)/C[timmax()] > sotobest){
        return;
    }

    //tim nghiem thanh phan
    for(int i=0; i<N; i++){
        if(CLOSE[i]==0 && sum+C[i]<=M){
            soto++;//nhanh can
            x[idx]=i;
            CLOSE[i]=1;
            sum+=C[x[idx]];
            cout<<"x: "; inmang(x,N);
            cout<<"CLOSE: ";inmang(CLOSE,N);
            cout<<"sum: "<<sum<<endl;
            cout<<"so to: "<<soto<<endl;
            cout<<"so to best: "<<sotobest<<endl;
            //quay lui
            thu(idx+1);
            x[idx]=-1;
            CLOSE[i]=0;
            soto--;//bot lai so to
        }
    }
}



int main(){
    readfile();
    qsort(C,0,N-1);
    inmang(C,N);
    init(x,N,-1);//quay lui
    init(CLOSE,N,0);//quay lui
    init(bestsolution,N,-1);//nhanh can
    sotobest=N;//gan ban dau so to bbest = so to tien hien co
    thu(0);
    cout<<"so lan thu: "<<dem;
    cout<<endl<<"so to can doi it nhat: "<<sotobest<<" - ";
    for(int i=0; i<N; i++){
        if(bestsolution[i]!=-1){
            cout<<C[bestsolution[i]]<<" ";
        }
    }
    cout<<endl;
    return 0;
}