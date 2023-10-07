//Convert Temperature Celsius into Fahrenheit
#include<stdio.h>
int main(){
    float Celsius, Fahrenheit;
    printf("Enter value of temperature in celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit= (Celsius*9/5)+32;
    printf("Temprature in Fahrenheit is %f",Fahrenheit);
    return 0;
}