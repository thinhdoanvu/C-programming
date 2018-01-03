#include<stdio.h>
#include<string.h>

//khai bao bien
char S[255];

//chuong trinh con
void nhapchuoi()
{
  printf("\nNhap vao chuoi DNA: \n");
  gets(S);
}

//chuyen doi cac ky tu thuong thanh hoa neu co
void inHOA()
{
  //khai bao bien
  int i;
  
  i=0;
  while(S[i]!='\0') //chua phai la ky tu ket thuc
  {
    if(S[i]>='a' && S[i]<='z')
    {
      S[i]=S[i]-32;//chuyen ky tu thuong thanh hoa
    }
    i++;
  }
}


//dem tan so A,G,T,C
int tanso_bazo(char k)
{
  //khai bao bien
  int z;
  int dem;
  
  z=0;
  dem=0;
  while(S[z]!='\0') //chua phai la ky tu ket thuc
  {
    if(S[z]==k)  
    {
      dem++;
    }
    z++;
  }
  return dem;
}

//xac dinh tan so
void intanso()
{
  //khai bao bien
  float f_A, f_T, f_G, f_C;
  int i;
  float GC;

  f_A=0;
  f_T=0;
  f_G=0;
  f_C=0;
  
  f_A=f_A+tanso_bazo('A');
  f_T=f_T+tanso_bazo('T');
  f_G=f_G+tanso_bazo('G');
  f_C=f_C+tanso_bazo('C');  

  printf("\nBazo \t\t Tan so\n");
  printf("A\t\t %0.f\n",f_A);
  printf("T\t\t %0.f\n",f_T);
  printf("G\t\t %0.f\n",f_G);
  printf("C\t\t %0.f\n",f_C);

  GC=(f_G+f_C)/(f_A+f_T+f_G+f_C)*100;

  printf("\nPhan tram (GC) la: %.3f\n",GC);
}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  inHOA();
  intanso();
  //ket thuc chuong trinh
  getch();
}
