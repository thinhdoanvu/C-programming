#include<algorithm>
#include <iostream>
#define MAX 100

using namespace std;
int p []= {10,30,20};
int pmax=50;
int w[]={60,120,100};

//int p []= {100,350,250,120,200,50,80,135,320};
//int pmax=500;
//int w[]={50,70,160,200,140,100,25,120,400};

float wp[MAX];
int n;


template <typename T>
void in(T m[], int size){
	for(int i=0; i<n; i++){
		cout<<m[i]<<"  ";
	}
}

void swap(int *x, int *y){
	int tam=*x;
	*x=*y;
	*y=tam;
}

void sortthuong(){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(wp[i] > wp[j]){
				float tam=wp[i];
				wp[i]=wp[j];
				wp[j]=tam;
				
				swap(&p[i], &p[j]);
				swap(&w[i], &w[j]);
			}
		}
		
	}
}

int main(){
	n=sizeof(p)/sizeof(p[0]);
	//tao wp
	for(int i=0; i<n; i++){
		wp[i]=(float)w[i]/p[i];
	}
	
	//sort wp theo thu tu tang dan
	sortthuong();
	//in ra mang p, w, wp
	cout<<"p[]: ";in(p,n);cout<<endl;
	cout<<"w[]: ";in(w,n);cout<<endl;
	cout<<"wp[]: ";in(wp,n);cout<<endl;
	//Xep do vat
	int kl=0;
	int gt=0;
	for(int i=0; i<n; i++){
		if(kl+p[i]<=pmax){
			kl+=p[i];
			gt+=w[i];
		}
	}
	cout<<"kl = "<<kl<<endl;
	cout<<"gt = "<<gt<<endl;
	return 0;
}

