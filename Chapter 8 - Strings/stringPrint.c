#include<stdio.h>

void printString(char a[]);

int main(){
    char name[]="Ashraful";
    char varsity[]="DIU";

    printString(name);
    printString(varsity);
    return 0;
}

void printString(char a[]){
    for(int i=0; a[i]!='\0'; i++){
        printf("%c", a[i]);
    }
    printf("\n");
}