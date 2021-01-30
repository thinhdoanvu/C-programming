#include<stdio.h>
#include<math.h>

//khai bao bien
int N;
float x;
float S;

void nhap()
{
	do
	{
		printf("Nhap N= ");	
		scanf("%d",&N);
	}
	while(N<3 || N>30);
	
	printf("Nhap x= ");
	scanf("%f",&x);
}

int tong(int a)
{
	int i;
	int tong;
	
	tong=0;
	for(i=1;i<=a;)
	{
		tong=tong+i;
		i=i+2;
	}	
	return tong;
}

void tinhtongS()
{
	int j;
	S=x;
	
	for(j=3;j<=N;)
	{
		S=S+(pow(x,j)/tong(j));
		j=j+2;
	}
	
	printf("Tong cua day so la: %.3f ",S);
}

int main()
{
	nhap();
	tinhtongS();
}
