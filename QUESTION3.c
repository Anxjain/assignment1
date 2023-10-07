//C Program to Find Area of Triangle Given Base and Height
#include<stdio.h>
int main(){
    float a,b;
    printf("Enter Height of triangle: ");
    scanf("%f",&a);
    printf("Enter base of triangle: ");
    scanf("%f", &b);
    printf("Area of triangle is %f", 0.5*a*b);
    return 0;
}