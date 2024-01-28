#include<bits/stdc++.h>
#define MAX 10000

//khai bao bien
struct thisinh{
    string ten;
    float toan,van,nn;//toan,van,ngoaingu
    float th,tb,kk,ut;//tohop,trungbinh12,khuyenkhich,uutien
    float dtn;
};

struct thisinh TS[MAX];
int n;//so luong thi sinh
float xtn[MAX][4];

void readdata(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>TS[i].ten>>TS[i].toan>>TS[i].van>>TS[i].nn>>TS[i].th>>TS[i].tb>>TS[i].kk>>TS[i].ut;
    }
    //luu cac gia tri vao mang 2 chieu: dtn, toan, van, ngoai ngu cho tung thi sinh
    for(int i=0;i<n;i++){
        TS[i].dtn=(float)((TS[i].toan + TS[i].van + TS[i].nn + TS[i].th)/4+TS[i].tb)/2+TS[i].ut;
        xtn[i][0]=TS[i].dtn;
        xtn[i][1]=TS[i].toan;
        xtn[i][2]=TS[i].van;
        xtn[i][3]=TS[i].nn;
    }
    //in ra ma tran xtn
    /*
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cout<<xtn[i][j]<<" ";
        }
        cout<<endl;
    }
    */
}

void ketqua(){
    for(int i=0; i<n; i++){
        if(TS[i].dtn <5){
            cout<<TS[i].ten<<" "<<TS[i].dtn<<" NO"<<endl;
        }
        else{
            if(TS[i].dtn >= 5){
                int dem=0;
                int diemliet[3]={0,0,0};//quy dinh ko co mon nao bi liet = 0 (toan, van, ngoai ngu)
                for(int j=1; j<4; j++){
                    if(xtn[i][j] < 1){
                        dem++;
                        //luu vao mang danh dau mon co diem liet
                        diemliet[j-1]=1;
                    }
                }
                //het for khong co diem nao <=1
                if(dem==0){
                    cout<<TS[i].ten<<" "<<TS[i].dtn<<" YES"<<endl;
                }
                else{//dem!=0 nghia la co diem liet
                    cout<<TS[i].ten<<" "<<TS[i].dtn<<" NO (";
                    for(int k=0; k<3; k++){
                        if(diemliet[k]==1){
                            switch (k)
                            {
                            case 0:
                                cout<<"T = "<<TS[i].toan;
                                break;
                            case 1:
                                cout<<" V = "<<TS[i].van;
                                break;
                            case 2:
                                cout<<" NN = "<<TS[i].nn;
                                break;
                            default:
                                break;
                            }
                        }
                    }
                    cout<<")"<<endl;
                }
            }
        }
    }
}

//chuong trinh chinh
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    readdata();
    ketqua();
    return 0;
}