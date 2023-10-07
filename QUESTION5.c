//C Program to Find Percentage of 5 Subjects
#include<stdio.h>
int main(){
    int M,P,C,E,H;
    printf("Enter marks in maths: ");
    scanf("%d",&M);
    printf("Enter marks in Physics: ");
    scanf("%d",&P);
    printf("Enter marks in Chemistry: ");
    scanf("%d",&C);
    printf("Enter marks in English: ");
    scanf("%d",&E);
    printf("Enter marks in Hindi: ");
    scanf("%d",&H);
    int total= M+P+C+E+H;
    float percentage= (total/500)*100;
    printf("Percentage of 5 Subjects is %f", percentage);
    return 0;
}