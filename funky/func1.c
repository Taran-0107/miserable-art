#include <stdio.h>

int sum(int a){
    int tempsum=a*(a+1)/2;
    return tempsum;
}

int main(){

    int b=1;

    printf("enter a natural number: \n");
    scanf("%d",&b);

    int s=sum(b);

    printf("the sum of natural numbers up to %d is %d\n", b,s);

    return 0;
}