#include<stdio.h>

int main(){
    char oldStr[] = "OldString";
    char newStr[] = "NewString";

    strcpy(newStr, oldStr); //copy all the elements from oldStr to newStr
    puts(newStr); //printing copied element

    return 0;
}