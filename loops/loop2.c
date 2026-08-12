#include<stdio.h>

void userloop(){

    int a=1;
    while (a!=0){
        printf("type 0 to exit: ");
        int *b=&a;

        long int c=1000000000;


        printf("%d %d %d\n",sizeof(b),sizeof(a),sizeof(c));
        scanf("%d",&a);
        printf("\nblah blah blah\n");
    }



}

int main(){

    userloop();
    

    return 0;
}