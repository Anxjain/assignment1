//Circumference and area of circle
#include<stdio.h>
int main(){
    float r;
    printf("Enter value of radius: ");
    scanf("%f",&r);
    printf("Circumference of the circle is %f \n",3.14*2*r);
    printf("Area of the circle is %f",3.14*r*r);
    return 0;
}