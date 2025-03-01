Cho trước ngày tháng năm hợp lệ, in ra ngày/tháng/năm kế tiếp:  
Ví dụ:  
30 4 2024 -> 1/5/2024  
29 2 2024 -> 1/3/2024  
31 12 2024 -> 1/1/2025  
30 10 2024 -> 1/11/2024  
```
#include<iostream>
using namespace std;

int d,m,y;

int nhuan(int year){
	if(year %4 == 0 && year %100 !=0){
		return 1;
	}
	if(year %400 == 0){
		return 1;
	}
	return 0;
}

void thu(){
	//ngay <30 cho tat ca cac thang (tru thang 2)
	if(d<30 && m!=2 && m<12){
		d++;
		return;
	}
	//ngay 28 cho thang 2
	if(d==28 && m==2){
		if(nhuan(y)==0){
			d=1;
			m=3;
		}
		else{
			d++;
			m=2;
		}
		return;
	}
	//ngay 29 cho thang 2 cho nam nhuan
	if(d==29 && m==2){
		if(nhuan(y)==1){
			d=1;
			m=3;
		}
		return;
	}
	//ngay 30 cho cac thang 4,6,9,11
	if(d==30 && (m==4 || m==6 || m==9 || m==11)){
		d=1;
		m++;
		return;
	}
	//ngay 31 cho cac thang 1,3,5,7,8,10
	if(d==31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)){
	
		d=1;
		m++;
		return;
	}
	//ngay 31 thang 12
	if(d==31 && m==12){
		cout<"hehe";
		d=1;
		m=1;
		y++;
		return;
	}
}

int main(){
	scanf("%d%d%d",&d,&m,&y);
	thu();
	cout<<d<<"/"<<m<<"/"<<y;
	return 0;
}
```
