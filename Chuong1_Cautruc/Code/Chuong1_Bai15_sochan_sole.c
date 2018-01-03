#include<stdio.h>
//in ra cac so le va cac so chan trong pham vi tu 1 den N

//khai bao bien
int N;

//chuong trinh con
void nhapN()
{
  printf("\nNhap so phan tu cua day so = ");
  scanf("%d",&N);
  
  while(N<20 || N>50)
  {
    printf("\nSo phan tu cua day so phai nam trong khoang tu 20 den 50 \n");
    printf("\nNhap so phan tu cua day so = \n");
    scanf("%d",&N);
  }
}

//kiem tra chan le
int is_chan(int k)
{
  if(k%2==0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

//in so chan
void insochan()
{
  //khai bao bien
  int i;
  
  printf("\nCac so chan co trong day so la: \n");
    
  for(i=1;i<N;i++)
  {
    if(is_chan(i)==0)
    {
      printf("%d\t",i);
    }
    else
    {
    }
  }
}

//in so le
void insole()
{
  //khai bao bien
  int i;
  
  printf("\nCac so le co trong day so la: \n");
    
  for(i=1;i<N;i++)
  {
    if(is_chan(i)==1)
    {
      printf("%d\t",i);
    }
    else
    {
    }
  }
}

//chuong trtinh chinh
int main()
{
  nhapN();
  insochan();
  insole();
  //ket thuc chuong trinh
  getch();
}
