//Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=10;j++)
        printf("%d\t",i*j);
    }
    return 0;
}