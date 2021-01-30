#include<stdio.h>
#include<math.h>

//khai bao bien
int N;
int mang[15];

//nhap mang N phan tu la cac so nguyen (5<=N<=30)
void nhapN()
{
	do
	{
		printf("Nhap so N= ");
		scanf("%d",&N);
	}while(N<5 || N>30);
}

void nhapmang()
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("mang[%d] = ",i);
		scanf("%d",&mang[i]);
	}	
}

void inmang()
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%5d",mang[i]);
	}
}

int check2so(int a)
{
	if((a>9 && a<100) || (a<-9) && a>-100)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

void tong2chuso()
{
	int i;
	int Tong;
	
	Tong=0;
	for(i=0;i<N;i++)
	{
		if(check2so(mang[i])==1)
		{
			Tong=Tong+mang[i];
		}
	}
	
	printf("\nTong cua cac phan tu co 2 chu so trong mang la: %d",Tong);
}

int chan(int a)
{
	if(a%2==0)
	{
		return 1;
	}	
	else
	{
		return -1;
	}
}

void timmax()
{
	int i;
	int dem=0;
	int MAX;
	
	//tim phan tu chan dau tien va gan MAX=ptu do
	i=0;
	while(i<N && chan(mang[i])==-1)
	{
		i++;
	}
	if(i==N)
	{
		printf("\nKhong co phan tu chan trong mang");
	}
	else
	{
		//Tim phan tu chan lon nhat
		printf("\n i= %d, mang[%d]=%d",i,i,mang[i]);
		
		MAX=mang[i];
		int j;
		for(j=i+1;j<N;j++)
		{
			if(MAX<mang[j] && chan(mang[j])==1)
			{
				MAX=mang[j];
			}
		}
		printf("\nPhan tu chan lon nhat trong mang la: %d",MAX);
	}
}

int main()
{
	nhapN();
	nhapmang();
	printf("Mang sau khi nhap la: \n");
	inmang();
	tong2chuso();
	timmax();
}
