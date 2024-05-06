#include<stdio.h>
#include<string.h>
#define max 100

char s[max]="  Dai        Hoc     Nha Trang         ";
void Xoa()
{
	int i = 0;
	int j;
	char C[max];
	int dem = 0;
	int len=strlen(s);
	
	//copy chuoi khong co ky tu trang o dau
	while(s[i] == ' ')
	{
		i++;
	}
//	printf("\ni= %d, len = %d",i,len);
	for(int j = i; j < len; j++)
	{
		C[dem++] = s[j];
	}
	C[dem]='\0';
	printf("\nChuoi sau khi xoa dau:%s",C);
	
//	//xoa ky tu trang o giua
	len=strlen(C);
	printf("\nlen = %d",len);
	
	for(i=0; i<len;){
		printf("\ni=%d",i);
		if(C[i] == ' ' && C[i+1] == ' ' && C[i+1]!='\0')
		{
			for(j=i; j<len; j++){//dich chuoi C sang trai
				C[j]=C[j+1];
			}
			printf("\nChuoi sau khi xoa:%s",C);
			len--;
		}
		else{
			i++;
		}
	}
	//xoa ky tu trang o cuoi trang chuoi C
	printf("\nlen = %d",len);
	while(C[len-1]==' ' && C[len-1]!='\0'){
		len--;
	}
	printf("\nlen = %d",len);
	printf("\nChuoi sau khi xoa la:");
	for(i=0; i<len; i++){
		printf("%c",C[i]);
	}
	
}
int main()
{
	printf("Chuoi da nhap la:");
	printf("%s",s);
	Xoa();
}
