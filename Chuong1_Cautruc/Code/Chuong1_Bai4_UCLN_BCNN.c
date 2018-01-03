#include<stdio.h>

//khai bao bien
int a,b;

//nhap 2 so a,b tu ban phim
int nhapab()
{
  printf("Nhap so nguyen thu nhat (a)= ");
  scanf("%d",&a);
  printf("Nhap so nguyen thu hai (b)= ");
  scanf("%d",&b);
}    
 
//tim uoc chung lon nhat
int timucln(int n1, int n2)
{
  while(n1!=n2)
  {
    if (n1<n2)
    {
      n2=n2-n1;
    }
    else
    {
      n1=n1-n2;
    }
  }
  return n2;
}  

//tim boi chung nho nhat cua 2 so
int bcnn(int n1, int n2)
{
  return n1*n2/timucln(n1,n2);
}   

//in ket qua ra man hinh              
void inkq()
{
     printf("\nUCLN cua 2 so (%d, %d) la %d", a,b,timucln(a,b));
     printf("\nBCNN cua 2 so (%d, %d) la %d", a,b,bcnn(a,b));
}

//chuong trinh chinh
int main()
{
    nhapab();
    inkq();
    getch();
}
                           
    
    
