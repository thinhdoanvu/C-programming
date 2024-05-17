/*
Nhập một chuỗi chuẩn có tối đa 100 ký tự: dai hoc nha trang thanh lap nam 1959
In ra chuỗi cừa nhập: Chuoi vua nhap: dai hoc nha trang thanh lap nam 1959
In số lượng các chữ cái trong chuỗi: So luong chu cai trong chuoi: 25
In ra số từ của chuỗi: Chuoi co 8 tu
In ra độ dài của các từ trong chuỗi: Do dai cua cac tu: 3  3  3  5  5  3  3  4
In ra từ dài nhất co bao nhiêu ký tự: Tu dai nhat co 5 ky tu
In ra các từ theo thứ tự ngược lại của chuỗi cho trước, mỗi từ 1 hàng:
1959
nam
lap
thanh
trang
nha
hoc
dai
Xoá 3 từ cuối cùng của chuỗi: Chuoi sau khi xoa 3 tu cuoi cung: dai hoc nha trang thanh
*/

#include<stdio.h>
#include<string.h>
#define MAX 100

//khai bao bien
char s[MAX]="";
int len=0;

//chuong trinh con
void nhap(){
	printf("Nhap vao chuoi chuan (toi da 100 ky tu): ");
	gets(s);
	printf("Chuoi vua nhap: ");
	puts(s);
	len=strlen(s);
}

void demchu(){
	int dem=0;
	for(int i=0; i<len; i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			dem++;
		}
	}
	printf("So luong chu cai trong chuoi: %d",dem);
}

void demtu(){
	int dem=1;
	for(int i=0; i<len; i++){
		if(s[i]==' ' && s[i]!='\0'){
			dem++;
		}	
	}
	printf("\nChuoi co %d tu",dem);
	//do do dai cua cac tu
	int dodai[dem];
	int sotu=0;
	int count=0;
	for(int i=0; i<=len; i++){//duyet qua chuoi
		if(s[i]==' ' || s[i]=='\0'){
			dodai[sotu++]=count;//luu do dai cua tu vao mang dodai
			count=0;//reset lai do dai cua tu
		}
		else{
			count++;
		}
	}
	//in ra mang do dai cua cac tu
	printf("\nDo dai cua cac tu: ");
	for(int i=0; i<dem; i++){
		printf("%d  ",dodai[i]);
	}
	//tim ra so lon nhat trong mang dodai
	int max=dodai[0];
	for(int i=1; i<dem; i++){
		if(dodai[i] > max){
			max = dodai[i];
		}
	}
	printf("\nTu dai nhat co %d ky tu", max);
	
}

void intu(){
	char tam[MAX];
	int pos=0;
	for(int i=len; i>=0; i--){
		if(s[i]!=' '){
			tam[pos++]=s[i];
		}
		else{
			printf("\n");
			for(int i=pos-1; i>=0; i--){
				if(tam[i]!='\0'){
					printf("%c",tam[i]);
				}
			}
			pos=0;//reset lai vi tri cua pos
		}
	}
	//in ra tu dau tien
	printf("\n");
	for(int i=0; i<len; i++){
		if(s[i]!=' '){
			printf("%c",s[i]);
		}
		else{
			break;
		}
	}
}

void xoatu(int num){
	printf("\nChuoi sau khi xoa %d tu cuoi cung: ",num);
	int dem=0;
	for(int i=len; i>=0; i--){
		if(s[i]==' '){
			dem++;
			if(dem==num){
				//vi tri cua ky tu trang thu num = i
				//in ra ca ky tu tu 0 -> i
				for(int j=0; j<i; j++){
					printf("%c",s[j]);
				}
				break;
			}
		}
	}
}

//chuong trinh chinh
int main(){
	nhap();
	demchu();
	demtu();
	intu();
	xoatu(3);
	return 0;
}
