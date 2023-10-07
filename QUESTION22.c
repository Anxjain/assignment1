//Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
int main(){
    int num,r,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp=num;
    for(sum=0;r=num%10;num=num/10){
        sum=sum+(r*r*r);
    }
    if(sum==temp)
    printf("%d is a Armstrong number",temp);
    else
    printf("%d is not a Armstrong number",temp);
    return 0;
    }
