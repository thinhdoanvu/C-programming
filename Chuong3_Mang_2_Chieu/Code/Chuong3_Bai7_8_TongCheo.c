#include<stdio.h>
//khai bao bien
int hang, cot;
int A[4][4];

//chuong trinh con
void nhapso_hang_cot()
{
  	//khai bao bien
  	printf("Nhap so hang cua ma tran = ");
  	scanf("%d",&hang);
  	printf("Nhap so cot cua ma tran = ");
  	scanf("%d",&cot);
  	while(hang<0 || cot<0 || hang>4 || cot >4 || hang!=cot)
  	{
  	  printf("Nhap so hang cua ma tran = ");
  	  scanf("%d",&hang);
  	  printf("Nhap so cot cua ma tran = ");
 	   scanf("%d",&cot);
			}
}

//nhap vao cac phan tu cho ma tran
void nhapphantu()
{
  //khai bao bien
  int i;
  int j;
  for(i=0; i<hang; i++)
		{
		  for(j=0; j<cot; j++)
		  {
	  	  printf("A[%d,%d] = ",i,j);
	  	  scanf("%d",&A[i][j]);
				}
		}
}

//in ra cac phan tu cua ma tran
void inphantu()
{
  //khai bao bien
  int i;
  int j;
  for(i=0; i<hang; i++)
		{
		  for(j=0; j<cot; j++)
		  {
	  	  printf("%5d",A[i][j]);
				}
				//xuong hang ke tiep
				printf("\n");
		}
}

//tinh tong cac phan tu thuoc duuong cheo chinh
void tongcheochinh()
{
	 //khai bao bien
	 int i;
	 int j;
	 int tong;
	 
	 tong=0;
	 
	 for(i=0;i<hang;i++)
	 {
	 	 for(j=0;j<cot;j++)
	 	 {
	 	 	 if(i==j)
	 	 	 {
	 	 	 	 tong=tong+A[i][j];
						}
				}
		}
		printf("\nTong cua cac phan tu thuoc duong cheo chinh la: %d\n",tong);
}

//tinh tong cac phan tu thuoc duuong cheo phu
void tongcheophu()
{
	 //khai bao bien
	 int i;
	 int j;
	 int tong;
	 
	 tong=0;
	 
	 for(i=0;i<hang;i++)
	 {
	 	 for(j=0;j<cot;j++)
	 	 {
	 	 	 if(i+j==hang-1)
	 	 	 {
	 	 	 	 tong=tong+A[i][j];
						}
				}
		}
		printf("\nTong cua cac phan tu thuoc duong cheo phu la: %d\n",tong);
}

//chuong trinh chinh
int main()
{
	  nhapso_hang_cot();
	  nhapphantu();
	  printf("\nCac phan tu co trong mang 2 chieu la: \n");
	  inphantu();
	  tongcheochinh();
	  tongcheophu();
	  //ket thuc chuong trinh
	  getch();
}
