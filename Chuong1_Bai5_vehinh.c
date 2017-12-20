#include<stdio.h>

//khai bao bien

//chuong trinh con
                            /* Hinh a
                            
                            ******
                             ***
                              *
                              	
                            */

void vehinh_a()
{
  //khai bao bien
  int ha;
  int i,j,k;
  
  printf("Nhap so hang: ");
  scanf("%d",&ha);
  while(ha%2==0)
  {
    printf("\nSo hang phai la so le ");
    printf("\nNhap so hang: ");
    scanf("%d",&ha);
  }
  
  for(i=0;i<=ha/2;i++)
  {
    //ve khoang cach
    for(j=0;j<i;j++)
    {
      printf(" ");
    }
    //ve dau *
    for(k=0;k<ha-2*i;k++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  }
}



                                /* Hinh b
                                
                                  *
                                 ***
                                *****
                                
                                */
void vehinh_b()
{
  //khai bao bien
  int hb;
  int i,j,k;
  
  printf("Nhap so hang: ");
  scanf("%d",&hb);
  while(hb%2==0)
  {
    printf("\nSo hang phai la so le ");
    printf("\nNhap so hang: ");
    scanf("%d",&hb);
  }
  
  for(i=0;i<=hb/2;i++)
  {
    //ve khoang cach
    for(j=hb/2;j>i;j--)
    {
      printf(" ");
    }
    //ve dau *
    for(k=0;k<2*i+1;k++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  }
  
}

                                    /* Hinh c
                                    
                                    *    *
                                    **  **
                                    ******
                                    **  **
                                    *    *
                                    
                                    */
void vehinh_c()
{
  //khai bao bien
  int hc,i,j,k,l;
  
  printf("Nhap so hang: ");
  scanf("%d",&hc);
  while(hc%2==0)
  {
    printf("\nSo hang phai la so le ");
    printf("\nNhap so hang: ");
    scanf("%d",&hc);
  }
  //ve nua tren
  for(i=0;i<=hc/2;i++)
  {
    //in sao
    for(j=0;j<=i;j++)
    {
      printf("*");
    }
    //in trang
    for(k=0;k<hc-2*i-1;k++)
    {
      printf(" ");
    }
    //in sao
   for(l=0;l<=i;l++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  }
  
  //ve nua duoi
  for(i=hc/2+1;i<=hc;i++)
  {
    //in sao
    for(j=0;j<=2*hc/2-i-1;j++)
    {
      printf("*");
    }
    //in trang
    for(k=0;k<=2*i-hc;k++)
    {
      printf(" ");
    }
    //in sao
   for(l=0;l<=2*hc/2-i-1;l++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  }
}
                                     /* Hinh d
                                    
                                    ******
                                     ***
                                      *
                                      *
                                     ***
                                    *****
                                    
                                    */


void vehinh_d()
{
  //khai bao bien
  int hd,i,j,k;
  
   printf("Nhap so hang: ");
   scanf("%d",&hd);
   while(hd%2==0)
   {
     printf("\nSo hang phai la so le ");
     printf("\nNhap so hang: ");
     scanf("%d",&hd);
    }
     
  //duyet tung hang cua nua tren tam giac
  for(i=0;i<=hd/2;i++)
  {
    //in ky tu trang
    for(j=0;j<i;j++)
    {
      printf(" ");
    }
    //in dau *
    for(k=0;k<hd-2*i;k++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  } 
  //ve nua duoi?????
  for(i=hd/2+1;i<hd;i++)
  {
    //in ky tu trang
    for(j=0;j<hd-i-1;j++)
    {
      printf(" ");
    }
    //in dau *
    for(k=0;k<=2*i-hd+1;k++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  }
}


//chuong trinh chinh
int main()
{
  vehinh_a();
  vehinh_b();
  vehinh_c();
  vehinh_d();
  getch();
  
}






