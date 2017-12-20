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

//in ra cac phan tu nam duoi duong cheo chinh (bao gom ca duong cheo chinh)
void in_duoi_cheochinh()
{
  //khai bao bien
  int i;
  int j;
  
  for(i=0;i<hang;i++)
  {
 	  for(j=0;j<cot;j++)
 	  {
	  	  if(i>=j)
	  	  {
  	  	  printf("%5d",A[i][j]);
						}
				}
				printf("\n");
		}
}

//in ra cac phan tu nam tren duong cheo chinh (bao gom ca duong cheo chinh)
void in_tren_cheochinh()
{
  //khai bao bien
  int i;
  int j;
  
  for(i=0;i<hang;i++)
  {
  	 //in cac so khong thoa dieu kien la cac ky tu trang
  	 for(j=0;j<i;j++)
				{
				  printf("     ");
				}
				//in cac so nam tren duong cheo chinh
 	  for(j=i;j<cot;j++)
 	  {
      printf("%5d",A[i][j]);
				}
				printf("\n");
		}
}


//chuong trinh chinh
int main()
{
	  nhapso_hang_cot();
	  nhapphantu();
	  printf("\nCac phan tu co trong mang 2 chieu la: \n");
	  inphantu();
	  printf("\nCac phan tu ben duoi duong cheo chinh la: \n");
	  in_duoi_cheochinh();
	  	  printf("\nCac phan tu ben tren duong cheo chinh la: \n");
	  in_tren_cheochinh();
	  //ket thuc chuong trinh
	  getch();
}
