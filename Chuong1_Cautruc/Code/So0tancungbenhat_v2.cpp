//So 0 tan cung be nhat
//A=15, B=12, K=2
#include<stdio.h>
#include<limits.h>
int so0tancung(int num){
	int dem=0;
	while (num%10 == 0) {
	    dem++;//tong chu so 0 tan cung
	    num/=10;
	}
	return dem;
}

int main(){
	int A,B,C,K;
	printf("Nhap A = ");scanf("%d",&A);
	printf("Nhap B = ");scanf("%d",&B);
	printf("Nhap K = ");scanf("%d",&K);
	int tong=A*B;
	int X = so0tancung(tong);
	int i=1;
	while(X<K){
		i++;
		printf("\ni=%d",i);
		tong=A*B*i;
		printf("\ntong=%d",tong);
		X = so0tancung(tong);	
		printf("\nso luong so 0 tan cung = %d",X);
	}
	printf("\nC=%d",i);	
	
	return 0;
}
