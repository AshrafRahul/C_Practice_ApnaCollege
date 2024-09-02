#include<stdio.h>

void printAddress(int n);
void _printAddress(int *n);

int main(){
    int n=4;
    printAddress(n);
    printf("Address of n is: %u\n", &n);

    _printAddress(&n);
    printf("Address of n is: %u\n", &n);

    return 0;
}

//call by value
void printAddress(int n){
    printf("Address of n is: %u\n", &n);
}

//call by reference
void _printAddress(int *n){
    printf("Address of n is: %u\n", n);
}
