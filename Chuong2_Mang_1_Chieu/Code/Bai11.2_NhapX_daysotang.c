//khai bao thu vien
#include<stdio.h>

//khai bao bien toan cuc
int A[10];
int N;
int X;

//chuong trinh con
void nhapN()
{
	//khai bao bien
	
	printf("Nhap N= ");
	scanf("%d",&N);	
	
	while(N<5 || N>10)
	{
		printf("Nhap N= ");
		scanf("%d",&N);	
	}
}

void nhapmang()
{
	//khai bao bien	
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}

void inmang()
{
	//khai bao bien	
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("%d\t",A[i]);
	}
}

void sapxeptang()
{
	//khai bao bien
	int i;
	int j;
	int tam;
	
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(A[i]>A[j])
			{
				tam=A[i];
				A[i]=A[j];
				A[j]=tam;
			}
		}
	}
	//in lai day so sau khi sap xep
	inmang();
}

void nhapX()
{
	printf("\nNhap X = ");
	scanf("%d",&X);	
}

void chendau()
{
	//khai bao bien
	int i;
	
	//Day so: 1 3 4 5 va X = 0
	//Buoc 1. Dich toan bo day so sang phai
	//- 1 3 4 5
	for(i=N;i>0;i--)
	{
		A[i]=A[i-1];
	}
	
	//Buoc 2. Gan phan tu dau tien la X
	//X=A[0];
	A[0]=X;
	
	//Buoc 3. In lai day so co N+1 phan tu
	N++;
	inmang();
}

void chencuoi()
{
	//khai bao bien
	int i;
	
	//1 2 3 4 5 va X =6
	//Buoc 1. Gan A[N]=X
	A[N]=X;
	//Buoc 2. tang N len 1 don vi
	N++;
	//Buoc 3. In lai day so co N +1 phan tu
	inmang();
}

void chengiua()
{
	//khai bao bien
	int i;
	int vitrichen;
	
	//1 2 3 5 6 va X = 4
	//0 1 2 3 4
	//Buoc 1. Tim vi tri can chen cua X
	//vitrichen=3
	vitrichen=0;
	while(vitrichen<N && A[vitrichen]<X)
	{
		vitrichen++;
	}
	//khi ra khoi vong lap while vitrichen duoc xac dinh tai noi A[vitrichen]>X
	//printf("vitrichen la: %d",vitrichen);
	
	//Buoc 2. Dich toan bo tu vitrichen den het day so ra sau 1 don vi
	//0 1 2 3 4 5
	//1 2 3 - 5 6
	for(i=N;i>vitrichen;i--)
	{
		A[i]=A[i-1];
	}
	
	//Buoc 3. Gan A[vitrichen]=X
	//1 2 3 4 5 6
	A[vitrichen]=X;
	
	//Buoc 4. Tang so phan tu len 1 don vi
	N++;
	
	//Buoc 5. In lai danh sach sau khi chen
	inmang();
}

void chenX()
{
	//khai bao bien
	
	nhapX();
	if(X<A[0])
	{
		chendau();
	}
	else
	{
		if(X>A[N-1])
		{
			chencuoi();
		}
		else
		{
			chengiua();
		}
	}
}

//chuong trinh chinh
int main()
{
	nhapN();
	nhapmang();
	printf("\nDay so sau khi nhap la: \n");
	inmang();
	printf("\nDay so sau khi sap xep tang dan la: \n");
	sapxeptang();
	chenX();
}

