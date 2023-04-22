#include<stdio.h>
#define maxhang 10//so hang toi da = 10
#define maxcot 10//so cot toi da = 10

//khai bao bien
int mt[maxhang][maxcot];
int sohang;
int socot;
int mt_T[maxhang][maxcot];

void inmatran(int a[][maxcot], int hang, int cot){//a[maxhang][maxcot]:SAI
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			printf("%5d",a[i][j]);//in het so phan tu tren 1 hang
		}
		printf("\n");//xuong hang -> in hang ke tiep
	}
}
//nhap 1 ma tran tu ban phim voi 3<=so hang = so cot <5
void nhapmatran(int mt[][maxcot], int &sohang, int &socot){
	do{
		printf("Nhap so hang: ");scanf("%d",&sohang);
		printf("Nhap so cot: ");scanf("%d",&socot);
	}while(sohang != socot || sohang<3 || sohang>=5);
	//nhap cac phan tu cho ma tran: so hang * socot phan tu
	for(int i=0; i<sohang; i++){
		for(int j=0; j<socot; j++){
			printf("mt[%d][%d] = ",i,j);
			scanf("%d",&mt[i][j]);
		}
	}
}
//tao ra ma tran chuyen vi
void chuyenvi(int mt[][maxcot], int sohang, int socot){
	for(int i=0; i<sohang; i++){
		for(int j=0; j<socot; j++){
			mt_T[i][j] = mt[j][i];
		}
	}
	printf("\nma tran chuyen vi la: \n");
	inmatran(mt_T,sohang,socot);
}

void searchX(int mt_T[][maxcot], int sohang, int socot, int X){
	int poshang = -1;
	int poscot = -1;
	for(int i=0; i<sohang; i++){
		for(int j=0; j<socot; j++){
			if(mt_T[i][j]==X){
				poshang=i;
				poscot=j;
				break;
			}
		}
	}
	if(poshang != -1 && poscot != -1){
		printf("Tim thay X = %d trong ma tran chuyen vi tai hang %d, cot %d",X,poshang,poscot);
	}
	else{
		printf("\nKhong tim thay X = %d trong ma tran chuyen vi",X);
	}
	
}

int searchX2(int a[][maxcot], int hang, int cot, int X){
	int poshang = -1;
	int poscot = -1;

	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			if(a[i][j]==X){
				poshang=i;
				poscot=j;
				break;
			}
		}
	}
	//printf("\nposhang: %d,poscot: %d",poshang,poscot);
	if(poshang!=-1 && poscot!= -1){
		return (poshang*3+poscot);
	}
	else{
		return -1;
	}
}


int main(){
	int mt[maxhang][maxcot]={{1,2,3},{4,5,6},{7,8,9}};// hang0, {}:hang1, {}:hang2. {cac phan tu cua cot}
	//nhapmatran(mt,sohang,socot);
	inmatran(mt,3,3);
	chuyenvi(mt,3,3);
	searchX(mt_T,3,3,4);
	
	
	int vthang=searchX2(mt,3,3,4)/3;
	int vtcot=searchX2(mt,3,3,4)%3;
	printf("\nKet qua tim kiem X trong mt: %d %d",vthang,vtcot);
	vthang=searchX2(mt_T,3,3,4)/3;
	vtcot=searchX2(mt_T,3,3,4)%3;
	printf("\nKet qua tim kiem X trong mt_T: %d %d",vthang,vtcot);
	return 0;
}
