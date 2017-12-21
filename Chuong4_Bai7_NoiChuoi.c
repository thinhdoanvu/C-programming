#include<stdio.h>
#include<string.h>

//khai bao bien
char S1[255];
char S2[255];

//chuong trinh con
void nhapchuoi()
{
  //khai bao bien
  printf("Nhap vao chuoi ky tu thu 1: \n");
  gets(S1);
  printf("\nNhap vao chuoi ky tu thu 2: \n");
  gets(S2);
}  

//noi 2 chuoi
void noichuoi()
{
  //khai bao bien
  int dem_S1;
  int dem_S2;
  
		dem_S1=0;
		//xac dinh chieu dai cua chuoi p
  while(S1[dem_S1]!='\0')//chua phai la ky tu ket thuc
  {
 	  dem_S1++;
		}
		
		//thao tac voi chuoi thu 2
		dem_S2=0;
		while(S2[dem_S2]!='\0')//chua phai la ky tu ket thuc
		{
			 S1[dem_S1]=S2[dem_S2];//them ky tu cua chuoi q vao p
			 dem_S2++;//duyet qua ky tu ke tiep
			 dem_S1++;//tang them so luong ky tu
		}
		//vi dem_p se tang them 1 ky tu nen gan ky tu nay lam ky tu ket thuc
		S1[dem_S1]='\0';
}


void noi2chuoi()
{
  //khai bao bien
  noichuoi();
  printf("\nChuoi ky tu sau khi noi la %s\n",S1);
}
//chuong trinh chinh
int main()
{
  nhapchuoi();
  noi2chuoi();
  //ket thuc chuong trinh
  getch();
}
