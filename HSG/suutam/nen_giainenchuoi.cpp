//cho chuoi Decrypt = "AAABBCCCEFEE" -> nen thanh: 3ABB3CEFE 
//cho chuoi Encrypt = "3CAA4DG" -> giai nen: CCCAADDDDG
//tu ky tu thu 3 tro len moi nen
#include<bits/stdc++.h>
//khai bao bien
string Decrypt = "AAABBCCCEFEE";
string Encrypt = "3CAA4DG";

void encrypt(string X){
    int dem=1;
    int len=0;
    char res[255];
    for(int i=0; i<X.length(); i++){
        if(X[i]==X[i+1]){
            dem++;
        }
        else{
            if(dem>=3){//tien hanh ma hoa
                res[len++]=char(dem+48);
                res[len++]=X[i];
            }
            else{//copy tung ky tu co trong X qua cho res
                for(int j=0; j<dem; j++){
                    res[len++]=X[i];
                }
            }
            dem=1;
        }
    }
    //in ra chuoi sau khi ma hoa
    cout<<"chuoi ma hoa: "<<res<<endl;
}

void decrypt(string X){
    char res[255];
    int len=0;
    for(int i=0; i<X.length();i++){
        if(X[i]>='0' && X[i]<='9'){//gap ky tu so
            for(int j=0; j<int(X[i]-48); j++){
                res[len++]=X[i+1];
            }
            i++;
        }
        else{//chi la ky tu
            res[len++]=X[i];
        }
    }
    //in ra chuoi sau khi giai ma
    cout<<"chuoi giai ma: "<<res<<endl;
}


//chuong trinh chinh
int main(){
    encrypt(Decrypt);
    decrypt(Encrypt);
    return 0;
}