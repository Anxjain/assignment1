//Calculate the Factorial of a Given Number
#include<stdio.h>
int main(){
    int fact=1,number,i=1;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(i<=number){
        fact=fact*i;
        i=i+1;
    }
    printf("Factorial of the number is %d",fact);
    return 0;
}