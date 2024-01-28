#include<bits/stdc++.h>

//chuong trinh chinh
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //readdata
    int k;
    cin >> k;
    int s[k];
    for(int i=0; i<k; i++){
        cin>>s[i];
    }
    //dem so luong cac ky tu so chan va so le
    int c_chan=0;
    int c_le=0;
    long long tong=0;
    for(int i=0; i<k; i++){
        if(s[i]%2==0){
            c_chan++;
        }
        else{
            c_le++;
        }
        tong+=s[i];
    }
    cout<<"so pt chan = " <<c_chan<<", so pt le = "<<c_le<<", tong = "<<tong<<endl;
    
    //processing.....
    if(c_le == k && k%2!=0){
        //neu toan bo day so la so le cac chu so le: 5 (1 3 5 7 9)
        cout<<0;
    }
    else{
        if(c_chan==k && k%2!=0){
            //neu toan bo day so la so le cac chu so chan: 5 (2 4 6 8 10)
            cout<<k*(k-1)/2;
        }
        else{
            if(c_le==k && k%2==0){
                //neu toan bo day so la so chan cac chu so le: 4 (1 3 5 7)
                cout<<k*(k-1)/2;
            }
            else{
                if(c_chan==k && k%2==0){
                    //neu toan bo day so la so chan cac chu so chan: 4 (2 4 6 8)
                    cout<<k*(k-1)/2;
                }
                else{
                    if(c_le%2!=0 && c_chan%2==0){
                        //day so co le so le va chan so chan: 5 (1 2 3 4 5)
                        cout<<c_chan*c_le;
                    }
                    else{
                        if(c_le%2!=0 && c_chan%2!=0){
                            //day so co le so le va le so chan: 6 (1 2 3 4 5 6)
                            cout<<c_chan*c_le;
                        }
                        else{
                            if(c_le%2==0 && c_chan%2!=0){
                                //day so co chan so le va le so chan: 5 (1 2 3 4 6)
                                cout<<c_chan+c_le;
                            }
                            else{
                                if(c_le%2==0 && c_chan%2==0){
                                    //day so co chan so le va chan so chan: 8 (1 2 3 4 5 6 7 8)
                                    cout<<c_chan*(c_chan-1)/2 + c_le*(c_le-1)/2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}