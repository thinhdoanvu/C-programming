#include<stdio.h>
//Tinh tong S
//TS=1+3+5+7+9+...+. m = tong so hang
//MS=2+3+5+8+...+n. n = tong so hang

//khai bao bien
int m,n;


//chuong trinh con
void nhap()
{
     printf("Nhap so phan tu cua tu so: ");
     scanf("%d",&m);
     printf("Nhap so phan tu cua mau so: ");
     scanf("%d",&n);
}

int tongtuso()
{
    //khai bao bien
    int i;
    int ts;
    
    ts=0;
    for(i=0;i<m;i++)
    {
      ts=ts+2*i+1;
    }
    return ts;
}

int tongmauso()
{
    int i;
    int n1,n2;
    int sum;
    int ms;
    
    n1=2;
    n2=3;
    sum=n1+n2;
    ms=0;
    
    for(i=2;i<n;i++)
    {
      ms=ms+sum;
      n1=n2;
      n2=sum;
      sum=n1+n2;
    }
    return ms;
}

void tinhtong()
{
     //khai bao bien
     int tuso,mauso;
     
     tuso=tongtuso();
     mauso=tongmauso();
     
     printf("\nTong la: \n    %d \n_________ \n    %d \n",tuso,mauso);
}
//chuong trinh chinh
int main()
{
    nhap();
    printf("\nTu so = %d\n",tongtuso());
    printf("\nMau so = %d\n",tongmauso());
    tinhtong();
    getch();
}
