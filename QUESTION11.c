//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main(){
    double integer;
    printf("Enter the integer: ");
    scanf("%lf",&integer);
    printf("First power of the integer is: %lf \n",integer);
    printf("Second power of the integer is: %lf\n",integer*integer);
    printf("Third power of the integer is: %lf",integer*integer*integer);
    return 0;
}