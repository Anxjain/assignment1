//Program for Finding Greater Between Two Number
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the greater",a);
    }
    else
        printf("%d is the greater",b);
    return 0;
}