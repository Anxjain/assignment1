//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=99){
        printf("Character is uppercase");
    }
    else if(ch>=97 && ch<=112){
        printf("Character is Lowercase");
    }
    else if(ch>=48 && ch<=57){
        printf("Character is a digit");
    }
   else
    printf("Character is special character");
    return 0;
}