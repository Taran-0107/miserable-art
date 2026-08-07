#include<stdio.h>


char* init(){
    char* str = "\nThis is a sample Test Program, for Ishaan Pandey\nyour task is to complete the area program to find the area of a circle, the `area` function\nyou can check the help.txt foe help\n\nGood Luck Kiddo :) <3\nUwU\nOwO\n";
    return str;
}

float area(int r){
    //compete this program to calculate the area of a circle
    float area=(float)r;
    return area;
}

int main(){
    char* str = init();

    int r;
    
    printf(str);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    float result = area(r);
    printf("The area of the circle is: %f\n", result);
}