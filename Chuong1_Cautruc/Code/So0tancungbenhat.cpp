//So 0 tan cung be nhat
//A=15, B=12, K=2
#include<stdio.h>
#include<limits.h>
int main(){
	int A,B,C,K;
	printf("Nhap A = ");scanf("%d",&A);
	printf("Nhap B = ");scanf("%d",&B);
	printf("Nhap K = ");scanf("%d",&K);
	for(int i=1;i<INT_MAX; i++){
		printf("\ni=%d",i);
		int tong=A*B*i;
		printf("\ntong=%d",tong);
		int dem=0; 	//tong chu so 0 tan cung
		int num=tong;
		while (num%10 == 0) {
	    dem++;
	    num/=10;
	  }
		printf("\nso luong so 0 tan cung = %d",dem);
		if(dem==K){
			printf("\nC = %d",i);
			break;
		}
		else{
			tong=tong*i;
		}
	}
	return 0;
}
