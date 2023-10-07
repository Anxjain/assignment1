//Calculate a Simple Interest
#include<stdio.h>
int main(){
    float P,R,T;
    printf("Enter value of Principle Amount: ");
    scanf("%f",&P);
    printf("Enter Rate of interset: ");
    scanf("%f",&R);
    printf("Enter period of time: ");
    scanf("%f",&T);
    printf("Simple interest is %f", (P*R*T)/100);
    return 0;
}