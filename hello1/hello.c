#include<stdio.h>
#include<init.h>


float area(int r){
    //compete this program to calculate the area of a circle
    float area=(float)r;
    return area;
}

int main(){
    char* str = inith();

    int r;
    
    printf("%s", str);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    float result = area(r);
    printf("The area of the circle is: %f\n", result);

    return 0;
}
