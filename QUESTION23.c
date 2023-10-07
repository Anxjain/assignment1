//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
    int n, sum=0,i=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    printf("Sum of natural numbers is %d",sum);
    return 0;
}