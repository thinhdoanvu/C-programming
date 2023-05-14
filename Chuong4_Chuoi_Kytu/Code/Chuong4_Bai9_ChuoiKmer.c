#include<stdio.h>
#include<string.h>

char S[255]="AGTCGTA ";

void nhapchuoi(){
	printf("Nhap vao chuoi ky tu: ");
//	fflush(stdin);//xoa bo dem trong ban phim
//	gets(S);
}

void inchuoi(){
	puts(S);
//	for(int i=0; i<strlen(S);i++){
//		printf("%c",S[i]);
//	}
//	int i=0;
//	while(S[i]!='\0'){
//		printf("%c",S[i]);
//		i++;
//	}
//	printf("\n");
}

void MID(char *source, int start, int stop){
	char dest[255];
	int dem=0;
	for(int i=start; i<start+stop; i++){
		dest[dem++]=source[i];
	}
	//gan ky tu ket thuc chuoi
	dest[dem]='\0';//ky tu ket thuc chuoi
	//in ra ket qua
	puts(dest);
}

void Kmer(char *source, int k){
	for(int i=0; i<strlen(S)-3; i++){
		char dest[255];
		int dem=0;
		//voi moi vi tri i: sao chep va in ra k ky tu
		for(int j=i; j<k+i; j++){
			dest[dem++]=S[j];
		}
		//in so ky tu trang
		for(int j=0; j<i; j++){
			printf(" ");
		}
		//in ra chuoi ky tu sau khi sao chep
		dest[dem]='\0';
		puts(dest);
	}
}

int main(){
	//nhapchuoi();
	printf("Chuoi vua nhap: ");
	inchuoi();
	//MID(S,4,3);
	Kmer(S,3);
}
