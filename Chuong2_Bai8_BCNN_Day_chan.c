#include<stdio.h>
//Nhap danh sach cac phan tu cho mang 1 chieu va in ra cac phan tu da nhap

//khai bao bien
int N;
int A[10];
int SC[10];
int dem;

//chuong trinh con
void nhapN()
{
  //khai bao bien
  printf("Nhap so phan tu cua mang = ");
  scanf("%d",&N);
  while(N<0 || N>10)
  {
    printf("So phan tu cua mang nam trong khoang tu 1 den N");
    printf("Nhap so phan tu cua mang = ");
    scanf("%d",&N);
  }
}

//nhap cac phan tu cho mang
void nhapmang()
{
  //khai bao bien
  int i;
  
  for(i=0; i<N;i++)
  {
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
  }
}

//in ra cac phan tu cua mang da nhap
void inmang()
{
  //khai bao bien
  int i;
  
  printf("\nCac phan tu trong mang da nhap la: \n");
  for(i=0; i<N;i++)
  {
    printf("%4d",A[i]);
  }
}

//kiem tra 1 so co la boi cua 3
int is_sochan(int k)
{
  //khai bao bien
  if(k%2==0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

//in ra day so la so chan
void insochan()
{
  //khai bao bien
  int i;
  
  dem=0;
  
  printf("\nDay so chan la tru so 0: \n");
  for(i=0;i<N;i++)
  {
    if(is_sochan(A[i])==0 && A[i]!=0)
    {
      SC[dem]=A[i];
      dem++;
    }
  }
  
  //in lai day so chan
  for(i=0; i<dem;i++)
  {
    printf("%4d",SC[i]);
  }
}

//in ra BCNN cua day so
//tim UCLN cua 2 so
int UCLN(int n1, int n2)
{
  //khai bao bien
  
  while(n1!=n2)
  {
    if(n1>n2)
    {
      n1=n1-n2;
    }
    else
    {
      n2=n2-n1;
    }
  }
  return n1;
}

//tim BCNN cua 2 so
int BCNN(int n1, int n2)
{
  //khai bao bien
  
  return n1*n2/UCLN(n1,n2);
}

//tim BCNN cua nhieu so
void inBCNN()
{
  //khai bao bien
  int i;
  
  int BCNN_day;
  for(i=0; i<dem-1; i++)
  {
    BCNN_day=BCNN(SC[i],SC[i+1]);
    SC[i+1]=BCNN_day;
  }
  printf("\nBCNN cua day so chan la: %d\n",BCNN_day);
}


//chuong trinh chinh
int main()
{
  nhapN();
  nhapmang();
  inmang();
  insochan();
  inBCNN();
  //ket thuc chuong trinh
  getch();
}
