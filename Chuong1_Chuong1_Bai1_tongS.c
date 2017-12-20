//S=1+3+5+7+?+n
//S=2+4+6+8+...+n
#include<stdio.h>

//khai bao bien
int n;

//chuong trinh con nhap
void nhapN()
{
  printf("Nhap so toan hang - N = : ");
  scanf("%d" ,&n);
}

//tinh tong cua N so lien tuc
int timtong()
{
    int S;
    int i;
    
    S = 0;
    for (i=0;i<n;i++) //so le
    //for (i=1;1<=n;i++) //so chan
    {
      S=S+2*i+1; //sole
      //S=S+2*i; //sochan
    }
    return S;
}

//chuong trinh con in ket qua
void inkq()
{
  printf("\n Tong S la: %d",timtong());
}

//chuong trinh chinh
int main()
{
  nhapN();
  inkq();
  getch();
}
