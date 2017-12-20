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

//ham kiem tra chan va le
int is_nguyento(int k)
{
	 //khai bao bien
	 int z;
	 int dem;
	 
	 dem=0;
	 for(z=1;z<=k;z++)
	 {
	 	 if(k%z==0)
    {
      dem++;
		  }
		}
  return dem;
}

//in ra cac so chan va so le
void innguyento()
{
  //khai bao bien
  int i;
  int j;
  
  for(i=0;i<hang;i++)
  {
 	  for(j=0;j<cot;j++)
 	  {
	  	  if(is_nguyento(A[i][j])==2)
	  	  {
  	  	  printf("%5d",A[i][j]);
						}
						else
						{
			     printf("    *");
						}
			}
			//xuong hang ke tiep
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
	  printf("\nCac so nguyen to co trong mang 2 chieu la: \n");
	  innguyento();
	  //ket thuc chuong trinh
	  //getch();
}
