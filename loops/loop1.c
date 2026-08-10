#include<stdio.h>

//dekh lo ab

void forloop(int a){

    printf("For Loop\n");

    for (int i=0;i<a;i++){
        printf("%d\n",i);
    }    

}

void whileloop(int a){

    printf("While Loop\n");

    int i=0;
    while (i<a){
        printf("%d\n",i);
        i++;
    }
}

void loop(int a, int type){

    if(type==1){
        forloop(a);
    }
    else{
        whileloop(a);
    }

}

int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    loop(10,0);
    loop(10,1);

    printf("sum is %d\n",min(10,20));

    return 0;
}