//Tinh tong S
//S=1/sqrt(1) + 1/sqrt(1+3) + 1/sqrt(1+3+5)+...+1/sqrt(1+3+5+..+n)

#include<stdio.h>
#include<math.h>

//khai bao bien
int n;
float S;

//chuong trinh con
void nhapN()
{
	do
	{
		printf("Nhap so N= ");
		scanf("%d",&n);
	}while(n<0 || n%2==0 || n>15);
}

int tong(int a)
{
	long int T;
	int j;
	
	T=0;
	for(j=1;j<=a;)
	{
		T=T+j;
		j=j+2;
	}
	return T;	
}

void tong_S()
{
	int i;
	S=0.0;
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			S=S+1.0/sqrt(tong(i));
		}
	}
	printf("Tong cua S la %.3f\n",S);
}

int main()
{
	nhapN();
	printf("Tong %d la: %d \n",n,tong(n));
	tong_S();
}
