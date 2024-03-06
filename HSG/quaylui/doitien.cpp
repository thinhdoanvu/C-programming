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
int dem=0;//phuong an doi tien thu 0

//chuong trinh con
void init(int m[], int size, int value){
    for(int i=0; i<size; i++){
        m[i]=value;
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

void thu(int idx){
    if(M==0){
        dem++;
        cout<<"-----Phuong an doi tien: "<<dem<<"-------"<<endl;
        for(int i=0; i<N; i++){
            if(x[i]!=-1){
                cout<<x[i]<<": "<<C[x[i]]<<endl;
            }
        }
        return;
    }
    //tim cac nghiem thanh phan
    for(int i=idx; i<N; i++){
        if(CLOSE[i]==0 && M>=C[i]){
            x[idx]=i;//danh dau vi tri mang x la to tien thu may trong mang C (bat dau tu vi tri 1): vi tri 0 la phep thu (0)
            CLOSE[i]=1;//danh dau to tien da su dung
            M=M-C[i];//so tien con lai
            thu(idx+1);
        }
    }
}

int main(){
    readfile();
    qsort(C,0,N-1);//N=10: 0-9
    inmang(C,N);
    int tam=M;//luu giu so tien sau moi vong lap
    
    for(int i=0; i<N; i++){
        M=tam;//coi nhu chua doi duoc to nao
        init(x,N,-1);//chua doi duoc to nao
        init(CLOSE,N,0);//chua to nao duoc doi
        thu(i);//bat dau phuong an tu to dau tien
    }

    return 0;
}