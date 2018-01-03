#include<stdio.h>
#include<string.h>

//khai bao bien
char S[30];

//chuong trinh con
void nhapchuoi()
{
  //khai bao bien
  printf("\nNhap vao chuoi ky tu: \n");
  gets(S);
  printf("\nChuoi vua nhap la: \n");
}  

//in ra chuoi vua nhap
void inchuoi()  
{
  //khai bao bien
  int i;
  
  for(i=0;i<strlen(S);i++)
  {
 	  printf("%c",S[i]);
		}
}

int is_nguyenam(char c)
{
  //khai bao bien
  
  switch(c)
  {
 	  case 'a':
 	  case 'e':	
 	  case 'i':
	  	case 'o':
	  	case 'u':	
	  	case 'A':
	  	case 'E':	
	  	case 'I':
  		case 'O':
  		case 'U':
				  return 1;
				default:
				  return 0;	
		}
}

void demnguyenam()
{
  //khai bao bien
  int i;
  
  int ng_a,ng_e,ng_i,ng_o,ng_u;
  int tongnguyenam;
  tongnguyenam=0;
  
  ng_a=0;
  ng_e=0;
  ng_i=0;
  ng_o=0;
  ng_u=0;
  
  i=0;
  while(S[i]!='\0') //chua phai la ky hieu ket thuc chuoi
  {
  	 //dem tong so nguyen am
				if(is_nguyenam(S[i])==1)
				{
				  tongnguyenam++;
				} 
				//cu the tung nguyen am
				if(S[i]=='a'||S[i]=='A')
				{
					 ng_a++;
				}
				if(S[i]=='e'||S[i]=='E')
				{
					 ng_e++;
				}
				if(S[i]=='i'||S[i]=='I')
				{
					 ng_i++;
				}
				if(S[i]=='o'||S[i]=='O')
				{
					 ng_o++;
				}
				if(S[i]=='u'||S[i]=='U')
				{
					 ng_u++;
				}
 	  i++;
		}
		
		printf("\nTong so nguyen am co trong chuoi la: %d\n",tongnguyenam);
		printf("\nTrong do: \n");
		printf("\nNguyen am a/A la: %d\n",ng_a);
		printf("\nNguyen am e/E la: %d\n",ng_e);
		printf("\nNguyen am i/I la: %d\n",ng_i);
		printf("\nNguyen am o/O la: %d\n",ng_o);
		printf("\nNguyen am u/U la: %d\n",ng_u);
}


//chuong trinh chinh
int main()
{
  nhapchuoi();
  inchuoi();
  demnguyenam();
  //ket thuc chuong trinh
  getch();
}
