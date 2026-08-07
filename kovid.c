#include<stdio.h>

char* init(){
    char* str = "\nThis is a sample , ishaan print the following";
  /*    A    
       AAA
      AAAAA
     AAAAAAA*/
    return str;
}

float area(int r){

    //compete this program to calculate the area of a circle
     return r*r*3.14156 ;
    }

int main(){
    char* str = init();
    float r;
    printf(str);
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float result = area(r);
    printf("The area of the circle is: %f\n", result);
}
