#include<stdio.h>
#define max_hang 4
#define max_cot 4

//khai bao bien
int hang,cot;
int A[max_hang][max_cot];

int N;
int dem;
int L[max_hang*max_cot];

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

//in ra danh sach hien co
void inmang(int Z)
{
  int i;

  for(i=0;i<Z;i++)
  {
    printf("%5d",L[i]);
  }
}

//chuyen cac phan tu cua matran vao 1 danh sach la mag 1 chieu
void chuyendoi()
{
  //khai bao bien
  int i;
  int j;

  N=hang*cot;
  dem=0;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      L[dem]=A[i][j];
      dem++;
    }
  }
  //in ra danh sach tu mang 2 chieu da co
  printf("\nDanh sach duoc tao thanh tu mang 2 chieu la: \n");
  inmang(dem);
}


//sap xep theo thu tu tang dan
void sapxep()
{
  //khai bao bien
  int i;
  int j;
  int tam;

  for(i=0;i<dem-1;i++)
  {
    for(j=i+1;j<dem;j++)
    {
      if(L[i]>L[j])
      {
        tam=L[i];
        L[i] =L[j];
        L[j]=tam;
      }
    }
  }

  //in lai day sau khi sap xep
  printf("\nMang sau khi sap xep tang dan la: \n");
  inmang(dem);
}

//gan cac phan tu cua mang vao vi tri cua hang va cot
void ganphantu()
{
  //khai bao bien
  int i;
  int j;
  int k;

  k=0;
  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      A[i][j]=L[k];
      k++;
    }
  }

  //in lai ma tran
  printf("\nma tran sau khi hoan vi cac phan tu theo thu tu tang dan la: \n");
  inphantu();
}


//chuong trinh chinh
int main()
{
  nhapso_hang_cot();
  nhapphantu();
  printf("\nCac phan tu co trong mang 2 chieu la: \n");
  inphantu();
  chuyendoi();
  sapxep();
  ganphantu();
  //ket thuc chuong trinh
  //getch();
}
