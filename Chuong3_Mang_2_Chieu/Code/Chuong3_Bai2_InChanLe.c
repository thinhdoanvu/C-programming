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
int chanle(int k)
{
  if(k%2==0)
  {
    return 0;//so chan
		}
		else
		{
		  return 1;//so le
		}
}

//in ra cac so chan va so le
void inchan()
{
  //khai bao bien
  int i;
  int j;
  
  for(i=0;i<hang;i++)
  {
 	  for(j=0;j<cot;j++)
 	  {
	  	  if(chanle(A[i][j])==0)
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

//in ra cac so le
void inle()
{
  //khai bao bien
  int i;
  int j;
  
  for(i=0;i<hang;i++)
  {
 	  for(j=0;j<cot;j++)
 	  {
	  	  if(chanle(A[i][j])==1)
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

void inchanle()
{
	  //khai bao bien
	  printf("\nCac so chan co trong mang 2 chieu la: \n");
	  inchan();
	  printf("\nCac so le co trong mang 2 chieu la: \n");
	  inle();
}

//chuong trinh chinh
int main()
{
	  nhapso_hang_cot();
	  nhapphantu();
	  printf("\nCac phan tu co trong mang 2 chieu la: \n");
	  inphantu();
	  inchanle();
	  //ket thuc chuong trinh
	  getch();
}
