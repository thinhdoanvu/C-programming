#include <stdio.h>
#include <stdlib.h>
//khai bao bien
int hang,cot;
int m2c[10][10];
int i,j;
FILE *fptr;

//chuong trinh chinh
int main(){
	//kiem tra tap tin
	if((fptr=fopen("E:\\NTU\\C_Programing\\NMLT2017\\Chuong5_File\\InputM2C.txt","r"))==NULL){
		printf("Tap tin khong ton tai");
		exit(1);
	}
	else{//Doc noi dung tap tin
		fscanf(fptr,"%d",&hang);
		fscanf(fptr,"%d",&cot);
		//Doc tung phan tu cua ma tran
		for(i=0;i<hang;i++){
			for(j=0;j<cot;j++){
				fscanf(fptr,"%d",&m2c[i][j]);
			}
		}
		//Dong file
		fclose(fptr);
	}
	
	//hien thi ket qua
	printf("Ma tran co so chieu %d x %d",hang,cot);
	printf("\nCac phan tu cua ma tran la:\n");
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf("%d",m2c[i][j]);
		}
		printf("\n");
	}
	
	//ket thuc chuong trinh
	return 0;
}


