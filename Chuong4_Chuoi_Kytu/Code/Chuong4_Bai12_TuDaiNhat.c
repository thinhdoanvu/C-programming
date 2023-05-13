#include<stdio.h>
#include<string.h>

//khai bao bien
char S[255] = "NTU la Dai hoc Nha Trang tro ang ";//chuoi copy

//xac dinh tu dai nhat trong chuoi
void tudainhat(){
	int i=0;
	int len=1;
	int dem=0;
	int D[255];
	while(S[i]!='\0'){
		if(S[i]!='\0' && S[i]==' '){
			D[dem++]=len;
			len=0;
		}
		len++;
		i++;
	}
	//in ra danh sach do dai cua tu
	for(int i=0; i<dem; i++){
		printf("%d  ",D[i]);
	}
	//tim max, vtmax
	int max=D[0];
	int vtmax=0;
	for(int i=1; i<dem; i++){
		if(max < D[i]){
			max=D[i];
			vtmax=i;
		}
	}
	printf("\nmax = %d, vtmax = %d",max,vtmax);
	//tong cac ky tu cho den tu dai nhat
	int sum=0;
	for(int i=0; i<vtmax; i++){
		sum+=D[i];
	}
	printf(", sum=%d\n",sum);
	//copy tu dai nhat
	printf("\nTu dai nhat la: ");
	for(int i=sum; i<sum+max; i++){
		printf("%c",S[i]);
	}
}

//chuong trinh chinh
int main()
{
  tudainhat();
  //ket thuc chuong trinh
  return 0;
}
