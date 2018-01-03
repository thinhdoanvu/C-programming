#include<stdio.h>
#include<string.h>

//khai bao bien
char S[255];
char C[255];//chuoi copy

//chuong trinh con
void nhapchuoi()
{
  printf("\nNhap vao chuoiky tu: \n");
  gets(S);
}

//xoa cac ky tu trang thua trong chuoi
void xoatrang()
{
  //khai bao bien
  int i;
  int next;
  
  int dem;
  
		i=0;
		next=0;
		dem=0;
		
  while(S[i]!='\0') //chua phai la ky tu ket thuc chuoi
  {
  	 if(S[i]==' ')//ky tu trang thu nhat
  	 {
 	 	  next=i+1;
 	 	  //kiem tra ky tu ke tiep co phai la ky tu ket thuc khong
 	 	  if(S[next]!='\0')
 	 	  {
 	 	  	 while(S[next]==' ' && S[next]!='\0')
 	 	  	 {
 	 	  	 	 if(S[next]==' ')//ky tu trang thu ke tiep
 	 	  	 	 {
 	 	  	 	 	 i++;//tiep tuc xet phan tu tiep theo
										}
										next++;//next tang cho bang i
								}
						}
				}
				C[dem]=S[i];//copy ky tu thu i tu chuoi S sang chuoi C
				dem++;
    i++;	
		}
		
		//xoa bo ky tu trang dau chuoi C neu co
		if(C[0]!='\0' && C[0]==' ') //chua phai la ky tu ket thuc chuoi
		{
			 //dich toan bo chuoi sang trai
			 for(i=0;i<strlen(C)-1;i++)
			 {
		 	  C[i]=C[i+1];
				}
			 dem--;
		}
		//in ra chuoi sau khi xoa
		printf("\nChuoi sau khi xoa tat cac cac ky tu trang lien ke nhau :\n");
		for(i=0;i<dem;i++)
		{
			 printf("%c",C[i]);
		}
}


//xac dinh tu dai nhat trong chuoi
void tudainhat()
{
  //khai bao bien
  int chieudai[255];
  int i;
  int len;
  int dem;
 
  dem=0;
  i=0;
  len=0;

  while(C[i]!='\0') //chua phai la ky tu ket thuc)
  { 
    if(C[i]!=' ')
    {
      len++;
    }
    else
    { 
      chieudai[dem]=len;
      len=0;
      dem++;
    }
    i++;  
  }

  //tim MAX va vitri MAX
  int MAX;
  int vtMAX;
  MAX=chieudai[0];
  vtMAX=0;
  
  for(i=1;i<dem;i++)
  {
    if(chieudai[i]>MAX) 
    {
      MAX=chieudai[i];
      vtMAX=i;
    }
  }

  //in ra tu co do dai lon nhat
  //tim vi tri cua ky tu trang thi vtMAX
  int batdau;
  int vt;
  int ketthuc;

  batdau=1;
  i=0;

  //in ra tu dau tien neu la tu dai nhat o day
  printf("\nTu dai nhat la: ");
  if(vtMAX==0)
  {
    for(vt=0;vt<MAX;vt++)
    {
      printf("%c",C[vt]);
    }
  }
  else
  {
    //tim tu o khoang giua
    i=0;
    batdau=0;
    while(C[i]!='\0')//chua phai la ky tu ket thuc
    {
      if(C[i]==' ')
      {
        batdau++;
        if(batdau==vtMAX)
        {
          ketthuc=i+1;
        }
      }
      i++;
    }
    //in ra tu dai nhat o giua  
    
    for(vt=ketthuc;vt<MAX+ketthuc;vt++)
    {
      printf("%c",C[vt]);
    } 
  }
  printf(", co %d ky tu",MAX);

}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  xoatrang();
  tudainhat();
  //ket thuc chuong trinh
  getch();
}
