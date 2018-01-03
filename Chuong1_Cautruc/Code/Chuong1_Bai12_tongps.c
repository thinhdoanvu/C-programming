#include<stdio.h>

int ts1,ts2,ms1,ms2;

void nhap()
{
  printf("Nhap tu so 1: ");
  scanf("%d",&ts1);
  printf("Nhap mau so 1: ");
  scanf("%d",&ms1);
  printf("Nhap tu so 2: ");
  scanf("%d",&ts2);
  printf("Nhap mau so 2: ");
  scanf("%d",&ms2);
  
  //in ra phan so
  
}

int ucln(int n1, int n2)
{
    //khai bao bien
  while(n1!=n2)
  {
    if(n1<n2)
    {
      n2=n2-n1;
    }
    else
    {
        n1=n1-n2;
    }
  }
    return n1;
}

int bcnn(int k1, int k2)
{
    return k1*k2/ucln(k1,k2);
}

void tinhtong()
{
     //khai bao bien
     int tuso,mauso;
     
     tuso=ts1*bcnn(ms1,ms2)/ms1+ts2*bcnn(ms1,ms2)/ms2;
     mauso=bcnn(ms1,ms2);
     
     printf("\nTong cua 2 phan so chua toi gian la: \n    %d \n_________ \n    %d \n",tuso,mauso);
     printf("\nTong cua 2 phan so sau khi toi gian la: \n    %d \n_________ \n    %d \n",tuso/ucln(tuso,mauso),mauso/ucln(tuso,mauso));
}


int main()
{
    nhap();
    tinhtong();
    getch();
}



