#include<stdio.h>
#include<string.h>
#define MAX 50 //lop co toi da 50 HS

//khai bao prototype

//khai bao bien
struct hocsinh{
	char hoten[255];
	char xeploai[20];
	float dkt;//diem kiem tra
	float dt;//diem thi
	float dtb;//diem trung binh
};
struct hocsinh hs[MAX];

int soluong = 3;

//chuong trinh con
void nhap(){
	for(int i=0; i<soluong; i++){//nhap thong cho tung hoc sinh cua lop
		printf("Thong tin hoc sinh thu %d: \n",i);
		printf("Ho va ten: ");
		fflush(stdin);
		gets(hs[i].hoten);
		printf("Diem kiem tra: ");
		scanf("%f",&hs[i].dkt);
		printf("Diem thi: ");
		scanf("%f",&hs[i].dt);
		float dtb = (hs[i].dkt + hs[i].dt)/2;
		hs[i].dtb = dtb;
	}
}

void inds(struct hocsinh t[MAX], int size){
	for(int i=0; i<size; i++){
		printf("%s",t[i].hoten);
		printf("\t%.2f",t[i].dkt);
		printf("\t%.2f",t[i].dt);
		printf("\t%.2f",t[i].dtb);
		printf("\n");
	}
}

void sort(struct hocsinh t[MAX], int size){
	for(int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
			if(t[i].dtb < t[j].dtb){
				//doi diem trung binh
				float tam = t[i].dtb;
				t[i].dtb = t[j].dtb;
				t[j].dtb = tam;
				//doi ho ten
				//doi diem thi
				tam = t[i].dt;
				t[i].dt = t[j].dt;
				t[j].dt = tam;
				//doi diem ktra
				tam = t[i].dkt;
				t[i].dkt = t[j].dkt;
				t[j].dkt = tam;
				//doi ho ten
				char chuoitam[MAX];
				strcpy(chuoitam,t[i].hoten);//strcpy(chuoidich,chuoinguon)
				strcpy(t[i].hoten,t[j].hoten);
				strcpy(t[j].hoten,chuoitam);
			}
		}
	}
	//in lai danh sach lop
	inds(t,size);
}

void xeploai(struct hocsinh t[MAX], int size){
	for(int i=0; i<size; i++){
		if(t[i].dtb >=8.0){
			strcpy(t[i].xeploai,"Gioi");
		}
		if(t[i].dtb >=7.0 && t[i].dtb <8.0){
			strcpy(t[i].xeploai,"Kha");
		}
		if(t[i].dtb >=6.0 && t[i].dtb <7.0){
			strcpy(t[i].xeploai,"TB.Kha");
		}
		if(t[i].dtb >=5.0 && t[i].dtb <6.0){
			strcpy(t[i].xeploai,"Trung binh");
		}
		if(t[i].dtb <5.0){
			strcpy(t[i].xeploai,"Yeu");
		}
	}
	for(int i=0; i<size; i++){
		printf("%s",t[i].hoten);
		printf("\t%.2f",t[i].dkt);
		printf("\t%.2f",t[i].dt);
		printf("\t%.2f",t[i].dtb);
		printf("\t%s",t[i].xeploai);
		printf("\n");
	}
}

//chuong trinh chinh
int main(){
	nhap();
	printf("========================================================\n");
	printf("Ho va ten\tDKT\tDthi\tDTB\n");
	printf("========================================================\n");
	inds(hs,soluong);
	printf("========================================================\n");
	printf("Ho va ten\tDKT\tDthi\tDTB\n");
	printf("========================================================\n");
	printf("\nDanh sach lop sap xep giam dan theo DTB:\n");
	sort(hs,soluong);
	printf("\nDanh sach lop sau khi xep loai:\n");
	printf("========================================================\n");
	printf("Ho va ten\tDKT\tDthi\tDTB\tXep loai\n");
	printf("========================================================\n");
	xeploai(hs,soluong);
	return 0;
}
