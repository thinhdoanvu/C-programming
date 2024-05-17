/*
Nhập vào ma trận có n hàng và n cột thoả mãn (2<=n=m<=4)
In ra ma trận sau khi nhập: 
Ma tran sau khi nhap:
1  3  2
7  8  9
6  5  4
Tìm và in ra só lượng phần tử là số lớn nhất của ma trận:
Co 1 so = so lon nhat la 9
Nhập trước 1 cột c từ bàn phím và kiểm tra các phần tử trên cột c có phải là dãy tăng hay không?
Nếu không là dãy tăng thì sắp xếp cột c theo thứ tự tăng dần
Ma tran sau khi sap xep cot:
Nhap cot thu can kiem tra: 2
Cot 2 chua phai la day tang
Ma tran sau khi sap xep:
1  3  2
7  8  4
6  5  9
*/
#include<stdio.h>
#define MAX 5

//khai bao bien
int a[MAX][MAX];
int m,n;
int c;

//chuong trinh con
void nhapmt(){
	printf("so hang = ");
	scanf("%d",&m);
	printf("so cot = ");
	scanf("%d",&n);
	while(m!=n || m<2 || n<2 || m>4 || n>4){
		printf("so hang = ");
		scanf("%d",&m);
		printf("so cot = ");
		scanf("%d",&n);
	}
	//sau khi nhap xong m,n thi tien hanh nhap tung phan tu
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
}

int max(int mt[MAX][MAX], int size){
	int sln=mt[0][0];
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(sln < mt[i][j]){
				sln=mt[i][j];
			}
		}
	}
	return sln;
}

void inmt(int mt[MAX][MAX], int size){
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			printf("%d  ",mt[i][j]);
		}
		printf("\n");
	}
}

void insolonnhat(int mt[MAX][MAX], int size){
	int dem=0;
	//dem co bao nhieu so = SLN
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(mt[i][j] == max(mt,size)){
				dem++;
			}
		}
	}
	printf("\nCo %d so = so lon nhat la %d",dem,max(mt,size));
}

void sapxep(int mt[MAX][MAX], int size, int cot){
	printf("Nhap cot thu can kiem tra: ");
	scanf("%d",&c);
	//kiem tra cot c co phai la day tang
	int i;
	for(i=0; i<size-1; i++){
		if(mt[i][c] > mt[i+1][c]){
			printf("Cot %d chua phai la day tang",c);
			break;
		}
	}
	//kiem tra dieu kien day da tang
	if(i==size-1){
		printf("Day so tren cot %d la day tang",c);	
	}
	else{
		//sap xep cac phan tu tren cot c
		for(int i=0; i<size-1; i++){
			for(int j=i+1; j<size; j++){
				if(mt[i][c] > mt[j][c]){
					int tam = mt[i][c];
					mt[i][c] = mt[j][c];
					mt[j][c] = tam;
				}
			}
		}
		printf("\nMa tran sau khi sap xep:\n");
		inmt(mt,size);
	}
}

//chuong trinh chinh
int main(){
	nhapmt();
	printf("Ma tran sau khi nhap: \n");
	inmt(a,n);
	insolonnhat(a,n);
	printf("\nMa tran sau khi sap xep cot: \n");
	sapxep(a,n,c);
	
	return 0;
}
