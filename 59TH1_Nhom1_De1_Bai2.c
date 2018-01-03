#include<stdio.h>
#define toida 10

//khai bao bien
int N;
int dem;
int A[toida];
int SL[toida];

//Cau 1. Nhap so luong phan tu cho mang (1d)
//nhap cac tham so
void nhapthamso()
{
  //khai bao bien
  
  printf("Nhap so luong phan tu = ");
  scanf("%d",&N);
  
   while(N<0 || N>10)
   {
     printf("\nSo phan tu toi da la 10 va khong duoc be hon 0\n");
     printf("Nhap so luong phan tu = ");
     scanf("%d",&N);
   }
}

//Cau 2. Nhap cac phan tu cho mang va in ra cac phan tu vua nhap (1d)
//nhap cac phan tu cho day so
void nhapphantu()
{
  //khai bao bien
  int i;

  for(i=0;i<N;i++)
  {
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
  }
  printf("\nCac phan tu trong day da nhap la: \n");
}

//in ra cac phan tu da nhap
void inphantu()
{
  //khai bao bien
  int i;
 
  for(i=0;i<N;i++)
  {
    printf("%4d",A[i]);
  }
}


//Cau 3. In ra cac phan tu tai cac vi tri so le (1d)
void invitrile()
{
  //khai bao bien
  int i;

  //tao ra cac so la cac phan tu o vi tri le cua mang A
  dem=0; //phan tu dau tin cua day so le

  for(i=0;i<N;i++)
  {
    if(i%2!=0)
    {
      SL[dem]=A[i];//copy phan tu tu mang A[] sang mang so le - SL[]
      dem++; //chuan bi phan tu ke tiep cho mang
    }
  }

  //in ra day so vua tim duoc
  printf("\nCac phan tu tai cac vi tri le la: 5\n");
  for(i=0;i<dem;i++)
  {
    printf("%4d",SL[i]);
  }
}

//Cau 4. Tim ra so lon nhat tu cau 3 (1d)
void timMAX()
{
  //khai bao bien
  int i;
  int MAX;

  MAX=SL[0];

  for(i=0;i<N;i++)
  {
    if(MAX<SL[i])
    {
      MAX=SL[i];
    }
  }

  printf("\nSo lon nhat cua day cac phan tu tai cac vi tri le la: %d\n",MAX);
}

//chuong trinh chinh
int main()
{
  nhapthamso();
  nhapphantu();
  inphantu();
  invitrile();
  timMAX();
  //ket thuc chuong trinh
  getch();
}

