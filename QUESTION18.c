//Check Character Is a Vowel or Not Using If-Else
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
       printf("Character is a vowel");
       else
       printf("Character is not a vowel");
       return 0;
}