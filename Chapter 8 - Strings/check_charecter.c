/*
chaeck if a given charecter is present in a string or not
*/

#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main(){
    char str[]="Ashraful";
    char ch='a';
    checkChar(str, ch);
}

void checkChar(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            printf("Charecter is present\n");
            return;
        }
    }
    printf("Charecter is not present\n");
}