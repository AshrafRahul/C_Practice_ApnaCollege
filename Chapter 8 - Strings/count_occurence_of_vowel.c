/*
write a function to count the occurence
of vowels in a string
*/

#include<stdio.h>
#include<string.h>

int countVowels(char str[]);

int main(){
    char str[]="Md Ashraful Islam";
    printf("Vowels are: %d\n", countVowels(str));
}

int countVowels(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||
         str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' ||
          str[i]=='O' || str[i]=='U'){
            count++;
          }
    }
    return count;
}