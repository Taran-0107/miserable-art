#include<stdio.h>

void userloop(){

    int a=1;
    while (a!=0){
        printf("type 0 to exit: ");
        scanf("%d",&a);
        printf("\nblah blah blah\n");
    }



}

int main(){

    userloop();
    

    return 0;
}