#include <iostream>
#include <limits.h>
#define MAX 100

using namespace std;
//int x[] = {-2, 3, 4};//12
//int x[] = {2, 3, 4};//24
//int x[] = {-2, -3, -4};//12
//int x[] = {1, 2, 3, 4};//12
//long long x[] = {-10,-21,41,39,29,-15,-45};//6573089250
//long long x[]={-27,-28,-16,-11,13,-9,-17,42,43,35,-45,-38,-4,41};//173752567609420800
long long x[]={
-38,-17,43,-11,-24,-19,-17,-27,26,-6,38,-29,-3
};//32983644011041152

long long best;
long long res[MAX];
int n;

void inmang(long long m[], int start, int size){
	for(int i=start; i<size; i++){
		cout<<m[i]<<" ";
	}
	cout<<endl;
}


long long sln(long long m[], int size){
	long long SLN=m[0];
	for(int i=1; i<size; i++){
		if(SLN < m[i]){
			SLN=m[i];
		}
	}
	return SLN;
}

void thu(int idx){
	for(int i=0; i<n; i++){
		res[i]=x[i];
	}
	if(idx==n){
		return;
	}
	for(int i=idx; i<n; i++){
		res[i]=res[i-1]*x[i];
	}
	inmang(res,idx,n);
	if(best<sln(res,n)){
		best=sln(res,n);
	}
	thu(idx+1);
}

int main() {
	n=sizeof(x)/sizeof(x[0]);
	best=sln(x,n);
	thu(1);
	cout<<"best = "<<best;
    return 0;
}
