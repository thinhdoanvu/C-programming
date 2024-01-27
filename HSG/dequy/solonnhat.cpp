#include<bits/stdc++.h>
//khai bao bien
string number, bignumber;
int k;
//chuong trinh chinh
int main(){
    // tang toc do doc du lieu
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //nhap du lieu: so nguyen va khong co khoang cach
    cin>>k;
    cin>>number;
    int len=number.length();
    int L=len-k;
    if(L==0){
        cout<<number;
    }
    else{
        int start = 0;
        while(k>0){
            //tim ra so lon nhat [start..finish]
            int finish = L-k;
            char max = number[start];
            int index = start;
            //cout << "L= " << L << " k = "<< k << " start = " << start << " finish = " << finish+start << endl;
            for(int i=start; i<=k+start; i++){
                if(max < number[i]){
                    max = number[i];
                    index=i;
                }
            }
            start=index+1;
            //cout << "index = " << index << endl;
            //cout << "max = " << max -48 << endl;
            //luu so lon nhat vao chuoi password
            bignumber+=max;
            L=len-index-1;//L bot di so luong ky tu
            k-=index;
        }
        //khi k>=L thi in ra phan con lai
        //cout << num_string.substr(start,k);
        //luu phan con lai vao mang password
        bignumber+=number.substr(start,k);
        cout << bignumber << endl;
    }
    return 0;
}