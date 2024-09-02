#include<stdio.h>

int main(){
    char *canChange = "Hello world!";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    return 0;
}