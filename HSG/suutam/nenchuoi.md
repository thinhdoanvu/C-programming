Nhập chuỗi S= ‘AABBBDFFFFGH’ (Từ 3 kí tự trở lên mới nén)
Nén: AA3BD4FGH
```
#include<iostream>
#include<string.h>
using namespace std;

string s="AABBBDFFFFGH";
int len;
char m[100];

void nen(){
	len=s.length();
	cout<<"len= "<<len<<endl;
	//ma hoa tung ky tu >3
	for(int i=0; i<len;){
		int dem=1;
		for(int j=i+1; j<=len; j++){
			if(s[i]==s[j]){
				dem++;
			}
			else{//khi khong tim duoc 2 ky tu lien tiep giong nhau
				cout<<s[i]<<":"<<dem<<endl;
				if(dem<3){//dem<2: in ra cac ky tu lien tiep
					for(int k=0; k<dem; k++){
						cout<<s[i];
					}
				}
				else{//dem>=3
					cout<<dem<<s[i];
				}
				dem=1;
				i=j;
			}
		}
		
	}
}

int main(){
	nen();
	return 0;
}
```
