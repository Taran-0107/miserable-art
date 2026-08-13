#include<stdio.h>

void count(int n){
    
    if (n<=0){
        return;
    }
    count(n-1);
    
    printf("%d\n",n);
}

int input(){

    int a=0;
    scanf("%d",&a);
    return a;
}

int main(){

    printf("enter a number:\n");

    int a=input();

    count(a);

    return 0;
}