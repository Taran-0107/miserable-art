#include<stdio.h>
#include<init.h>

float area(int r){
    //compete this program to calculate the area of a circle

    int r2=r*r;;
    float value=(float)r2*3.14;
    float area=value;
    return area;
}

int main(){
    char* str = inith();

    int r;
    
    printf(str);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    float result = area(r);
    printf("The area of the circle is: %f\n", result);

    return 0;
}