#include<bits/stdc++>
using namespace std;

//int CV[6]={8,5,1,2,5,1};
//int M[3]={0,0,0};

int CV[5]={3,3,2,2,2};
int M[2]={0,0};

int cv;
int sm;

void inmang(int m[], int size){
	for(int i=0; i<size; i++){
		cout<<m[i]<<"  ";
	}
	cout<<endl;
}

int compare(int a, int b){
  return a>b;
}

int max(int m[], int size){
	int ln=m[0];
	for(int i=1; i<size; i++){
		if(ln < m[i]){
			ln=m[i];
		}	
	}
	return ln;
}

int min(int m[], int size){
	int nn=m[0];
	int posnn=0;
	for(int i=1; i<size; i++){
		if(m[i] < nn){
			nn = m[i];
			posnn=i;
		}
	}
	return posnn;
}

void xeplich(){
	//mang danh dau cac cong viec da thuc hien
	int flag[cv]={0};
	
	//xep cac cong viec da sap xep vao sm tuong ung
	for(int i=0; i<sm; i++){
		M[i]=CV[i];
		flag[i]=1;
	}
	//in ra thoi gian thuc hien cua cac may o lan xep lich dau tien
	cout<<"Lan xep dau tien: "<<endl;
	inmang(M,sm);
	inmang(flag,cv);
	//tim thoi gian lon nhat, nho nhat
	int tmax = max(M,sm);
	int tmin = M[min(M,sm)];
	cout<<"tmax = "<<tmax<<", tmin = "<<tmin<<endl;
	//xep lich cho cac lan tiep theo
	for(int i=0; i<cv; i++){
		if(flag[i]==0){//cong viec chua duoc thuc hien
			//tim may co thoi gian thuc hien ngan nhat va xep lich	
			if(M[min(M,sm)] <= tmax){
				//them cong viec
				M[min(M,sm)] += CV[i];
				flag[i]=1;
			}
			//cap nhat gia tri tmax, tmin
			tmax = max(M,sm);
			tmin = M[min(M,sm)];
			//in ra cac may
			inmang(M,sm);
			inmang(flag,cv);
			cout<<"tmax = "<<tmax<<", tmin = "<<tmin<<endl;
		}	
	}
	cout<<"thoi gian can thuc hien toi da: "<<tmax;
}

int main(){
	cv = sizeof(CV)/sizeof(CV[0]);
	sm = sizeof(M)/sizeof(M[0]);
	cout<<"so cong viec: "<<cv<<endl;
	cout<<"so cong may: "<<sm<<endl;
	//sap xep cong viec theo thu tu giam dan
	cout<<"mang cong viec sau khi sap xep giam: ";
	sort(CV,CV+cv,compare);
  inmang(CV,cv);
	//xep lich
	xeplich();
}  
