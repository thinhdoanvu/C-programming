#include<stdio.h>
#include<string.h>
#define maxlen 255

//khai bao bien
char s[maxlen]="1959, dai hoc nha trang duoc thanh lap ";
int num_na[5]={0,0,0,0,0};//a e i o u

//chuong trinh con
void inchuoi(char source[maxlen]){
	printf("su dung ham puts(string): ");
	puts(source);
	printf("in chuoi bang vong lap: ");
	int i=0;
	while(source[i]!='\0'){
		printf("%c",source[i]);
		i++;
	}
}

void demna(char source[maxlen]){
	int i=0;
	while(source[i]!='\0'){
		//kiem tra cho nguyen am a/A
		switch (source[i]){
			case 'a':
			case 'A':{
				num_na[0]++;
				break;
			}
			case 'e':
			case 'E':{
				num_na[1]++;
				break;
			}
			case 'i':
			case 'I':{
				num_na[2]++;
				break;
			}
			case 'o':
			case 'O':{
				num_na[3]++;
				break;
			}
			case 'u':
			case 'U':{
				num_na[4]++;
				break;
			}
		}
		
		i++;
	}
}

void in_na(char source[maxlen]){
	printf("\nso luong cac nguyen am: (a/A) (e/E) (i/I) (o/O) (u/U): ");
	for(int i=0; i<5; i++){
		printf("%d  ",num_na[i]);
	}
}

int tongchuso(char source[maxlen]){
	int sum=0;
	int i=0;
	while(source[i]!='\0'){
		if(source[i]>='0' && source[i]<='9'){
			sum+=int(source[i])-48;//int('a')=65, int('0')=48
		}
		i++;
	}
	return sum;
}

void mid(char source[maxlen], int start, int num_char){
	char res[maxlen];
	int dem=0;//ky tu thu dem cua res
	for(int i=start; i<start+num_char; i++){
		res[dem++]=source[i];
	}
	res[dem]='\0';
	//in ra ket qua cua chuoi sau ham mid
	printf("%s\n",res);
}

void tudainhat(char source[maxlen]){
	int chieudai[255]={0};
	int dem=0;//phan tu cua mang chieu dai
	int len=0;//chieu dai cua tu
	//chieu dai cho cac tu trong chuoi
	//chieudai[dem++]=0;
	int i=0;
	while(source[i]!='\0'){
		if(source[i]!=' '){
			len++;
		}
		else{
			chieudai[dem++]=len;
			len=0;
		}
		i++;
	}
	//in ra mang cac chieu dai cua cac tu co trong chuoi
	printf("\nChieu dai cac tu trong chuoi: ");
	for(int i=0; i<dem; i++){
		printf("%5d",chieudai[i]);
	}
	//in ra do dai cua tu dai nhat
	int max=chieudai[0];
	for(int i=0; i<dem; i++){
		if(chieudai[i] > max){
			max = chieudai[i];
		}
	}
	printf("\nTu dai nhat co do dai = %d ky tu",max);
	//in ra man hinh tu nao la tu co do dai max
	printf("\nSo luong phan tu cua mang chieu dai = %d",dem);
	//mang chua vi tri cac ky tu trang cua chuoi dau vao
	int kttrang[dem];
	int j=0;
	//kttrang[j++]=0;
	for(int i=0; i<strlen(source); i++){
		if(source[i]!='\0' && source[i]==' '){
			kttrang[j++] = i;
		}
	}
	//in ra mang chua vi tri cac ky tu trang
	printf("\nVi tri cac ky tu trang trong chuoi: ");
	for(int i=0; i<j; i++){
		printf("%5d",kttrang[i]);
	}
	//in ra tu dai nhat
	printf("\nCac tu dai nhat trong chuoi: \n");
	for(int i=0; i<dem; i++){
		if(chieudai[i]==max){
			mid(source,kttrang[i]-max,max);
		}
	}
}

void xoatu2(char source[maxlen]){
	int pos=0;
	int dem=1;//ky tu trang thu 1 -2
	int i = strlen(source);
	//printf("i = %d",i);
	while(i>=0){
		if(dem<2){
			if(source[i] == ' '){
				dem++;
			}
		}
		else{
			pos=i;
			break;
		}
		i--;
	}
	printf("\nvi tri cua tu thu 2 bat dau tai: %d",pos-1);
	
	//in ra tu thu 2 tinh tu phai cung cua chuoi
	//??
}

//chuong trinh chinh
int main(){
	inchuoi(s);
	//in ra so luong nguyen am
	//demna(s);
	//in_na(s);
	//in chuoi theo thu tu cac tu
	//in ra tong cac chu so trong chuoi
	//printf("\ntong cac chu so trong chuoi: %d",tongchuso(s));
	//in ra tu dai nhat
	tudainhat(s);
	//in ra tu thu 2 tu phai qua ra khoi chuoi
	//xoatu2(s);
	
	return 0;
}
