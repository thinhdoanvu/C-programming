Nhập vào một chuỗi S bao gồm cả kí tự số và chữ. Đếm xem trong chuỗi S có bao nhiêu số chia hết cho 5 và in các số đó ra. 
VD: Nhập S= ‘asg35gds67gdgf345hh’ 
Có 2 số chia hết cho 5 là: 35, 345  
version 2  
Doan Vu Thinh, NTU, 31/03/2024  
```
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

string s="asg35gds67gdgf345hh";
int len;
int dem=0;

struct chuoi{
	string value;
};

struct chuoi c[100];

void tao(int n, string x){
	string res="";
	int dau=0;
	int cuoi=0;
	
	for(int i=0; i<n; i++){
		if(x[i]>='0' && x[i]<='9'){
			dau=i;
			for(int j=i+1; j<n; j++){
				if(x[j]>='0' && x[j]<='9'){
					cuoi=j;
				}
				else{
					i=j;
					break;
				}
			}
			cout<<"dau = "<<dau<<", cuoi = "<<cuoi<<endl;
			res=x.substr(dau,cuoi-dau+1);
			cout<<res<<endl;
			c[dem++].value = res;
		}
	}
}

int chuoiso2so(string x){//"345" => 345
	int number=0;
	int lenx = x.length();
	for(int i=0; i<lenx; i++){
		number = number*10 + int(x[i])-48;//int ("0") = 48: ma ascii
	}
	return number;
}

void inmangchuoi(struct chuoi x[], int size){
	cout<<endl<<"chuoi bao gom cac so: ";
	for(int i=0; i<size; i++){
		cout<<x[i].value<<" ";
	}
	//kiem tra so nao trong x chia het cho 5, bang cach chuyen chuoi thanh so
	cout<<endl<<"cac so chia het cho 5 trong chuoi c: ";
	for(int i=0; i<size; i++){
		if(chuoiso2so(x[i].value)%5==0){
			cout<<x[i].value<<" ";
		}
	}
}
int main(){
	cout<<s<<endl;
	len=s.length();
	tao(len,s);
	inmangchuoi(c,dem);
	return 0;
}
```
