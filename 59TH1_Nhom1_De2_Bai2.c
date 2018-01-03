#include<stdio.h>
#define toida 20 //toi da la 20 phan tu

//khai bao bien
int N;
int A[toida];
int SNT[toida];
int count;

//chuong trinh con
void nhapN()
{
  printf("Nhap so phan tu cua mang = ");
  scanf("%d",&N);
  while(N<0 || N<10 || N>20)
  {
    printf("\nSo phan tu phai thoa man dieu kien >0 va <20 \n");
    printf("Nhap so phan tu cua mang = ");
    scanf("%d",&N);
  }
}


//nhap cac phan tu cho mang
void nhapphantu()
{
  //khai bao bien
  int i;

  for(i=0;i<N;i++)
  {
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
  }

  printf("\nCac phan tu co trong mang 1 chieu la \n");
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

//tim so nguyen to
int is_nguyento(int k)
{
  //khai bao bien
  int dem;
  int z;

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

void invitri_ngto()
{
  //khai bao bien
  int i;

  count=0;

  for(i=0;i<N;i++)
  {
    if(is_nguyento(i)==2)
    {
      SNT[count]=A[i];
      count++;
    }
  }

  //in ra day so cua cac vi tri nguyen to
  printf("\nDay so tai cac vi tri nguyen to la: \n");
  for(i=0;i<count;i++)
  {
    printf("%4d",SNT[i]);
  }
}

//tim min cua day so
int min()
{
  //khai bao bien
  int i;
  int MIN;

  MIN=SNT[0];

  for(i=1;i<count;i++)
  {
    if(MIN>SNT[i])
    {
      MIN=SNT[i];
    }
  }
  return MIN;
}


//in ra so nho nhat trong day cac so o vi tri nguyen to
void inMIN()
{
  //khai bao bien

  printf("\nSo nho nhat trong day o cau tren la: %d\n",min());
}
//chuong trinh chinh
int main()
{
  nhapN();
  nhapphantu();
  inphantu();
  invitri_ngto();
  inMIN();
  //ket thuc chuong trinh
  //getch();
}
