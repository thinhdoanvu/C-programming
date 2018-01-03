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

//in ra cac phan tu nam duoi duong cheo phu (bao gom ca duong cheo chinh)
//version 1
//nhan xet i tang dan con j giam dan
//      02
//   11 12
//20 21 22

void in_duoi_cheophu_ver1()
{
  //khai bao bien
  int i;
  int j;
  
  int t;
  int k;
  
		i=0;
		j=cot-1;
		while(i<=hang && j>=0)
		{
			 //in cac so khong thoa dieu kien
			 for(t=0;t<j;t++)
			 {
		 	  printf("     ");
				}
				//in cac so thoa dieu kien
				for(k=j;k<cot;k++)
				{
					 printf("%5d",A[i][k]);
				}
				//xuong hang
			 	printf("\n");
			 	
    i++;
    j--;
		} 
}

//version 2 
//nhan xet i+j>hang-1
//      02
//   11 12
//20 21 22
void in_duoi_cheophu_ver2()
{
  //khai bao bien
  int i;
  int j;
  
  for(i=0;i<hang;i++)
  {
 	  for(j=0;j<cot;j++)
 	  {
	  	  //in cac so khong thoa dieu dien
	  	  if(i+j<hang-1)
	  	  {
  	  	  printf("     ");
						}
						else
						//in cac so thoa dieu kien
						{
						  printf("%5d",A[i][j]);
						}
				}
				//xuong hang
				printf("\n");
		}
  
}

//dac diem la: i tang dan va j giam dan
//00 01 02
//01 11
//20
void in_tren_cheophu_ver1()
{
  //khai bao bien
  int i;
  int j;
  
  int t;
  int k;
  
		i=0;
		j=cot-1;
		while(i<=hang && j>=0)
		{
			 //in cac so khong thoa dieu kien
			 for(t=0;t<=j;t++)
			 {
		 	  printf("%5d",A[i][t]);
				}
				//in cac so thoa dieu kien
				for(k=j;k<cot;k++)
				{
					 printf("     ");
				}
				//xuong hang
			 	printf("\n");
			 	
    i++;
    j--;
		} 
}

//in ra cac phan tu nam tren duong cheo phu (bao gom ca duong cheo chinh)
//nhan xet i+j>hang-1
//00 01 02
//01 11
//20
void in_tren_cheophu_ver2()
{
  //khai bao bien
  int i;
  int j;
  
  for(i=0;i<hang;i++)
  {
 	  for(j=0;j<cot;j++)
 	  {
	  	  //in cac so khong thoa dieu dien
	  	  if(i+j<=hang-1)
	  	  {
  	  	  printf("%5d",A[i][j]);
						}
						else
						//in cac so thoa dieu kien
						{
						  printf("     ");
						}
				}
				//xuong hang
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
	  printf("\nCac phan tu ben duoi duong cheo phu version 1 la: \n");
	  in_duoi_cheophu_ver1();
	  printf("\nCac phan tu ben duoi duong cheo phu version 2 la: \n");
	  in_duoi_cheophu_ver2();
   printf("\nCac phan tu ben tren duong cheo phu version 1 la: \n");
	  in_tren_cheophu_ver1();
	  printf("\nCac phan tu ben tren duong cheo phu version 2 la: \n");
	  in_tren_cheophu_ver2();
	  //ket thuc chuong trinh
	  getch();
}
