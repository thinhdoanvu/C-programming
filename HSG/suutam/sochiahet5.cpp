//cho chuoi S= ‘asg35gds67gdgf345hh’, in ra man hinh so chia het cho 5
//so chia het cho 5: 35, 345 la so co ky tu cuoi chia het cho 5
//mo rong bai toan la boi cua so bat ky
#include<bits/stdc++.h>

//khai bao bien
string S= "asg35gds67gdgf345hh";

struct number{
    string value;
};

struct number chuoiso[255];
int dem=0;
pair<int, int> position[255];

void tachso(){
    int len=0;//chieu dai cua chuoi so
    int pos;//vi tri tim thay so
    for(int i=0; i<S.length(); i++){
        if(S[i]>='0' && S[i]<='9'){//bat dau la cac ky tu so
            pos=i;
            for(int j=i;j<S.length(); j++){
                if(S[j]>='0' && S[j]<='9'){
                    len++;
                }
                else{
                    //cout<<"pos: "<<pos<<", len: "<<len<<endl;
                    position[dem].first=pos;
                    position[dem++].second=len;
                    len=0;
                    i=j;
                    break;
                }
            }
        }
    }
    //hien thi noi dung cua position, sao chep tung cap so cua S va luu vao chuoi
    for(int i=0; i<dem; i++){
        cout<<"pos: "<<position[i].first<<", len: "<<position[i].second<<endl;
        chuoiso[i].value=S.substr(position[i].first, position[i].second);
    }
}

void boi5(){
    //hien thi noi dung cua chuoi so
    for(int i=0; i<dem; i++){
        cout<<"so dang chuoi: "<<chuoiso[i].value<<endl;//in chuoi so dang ky tu
        //kiem tra xem so co chia het cho 5 ko?
        //voi bai toan chia het cho 5, chi can kiem tra ky tu cuoi: chuoiso[i].value
        //lam kho hon khi boi cua so bat ky -> chuyen xau ky tu thanh so
        int so=0;
        for(int j=0; j<chuoiso[i].value.length(); j++){
            so=so*10+(int(chuoiso[i].value[j])-48);
        }
        //cout<<"so = "<<so<<endl;//in thu xem co nhung so nao
        if(so%5==0){
            cout<<"so boi 5: "<<so<<endl;
        }
    }
}

//chuong trinh chinh
int main(){
    tachso();
    boi5();
    return 0;
}