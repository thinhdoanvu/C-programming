#include<stdio.h>

int solve(int start){
    int loop=1;
    while(start !=1){
        start=(start%2==0)?start/2:start*3+1;
        printf("%d  ",start);
        loop++;
    }
    return loop;
}

int main(){
    printf("loop = %d\n",solve(201));
}