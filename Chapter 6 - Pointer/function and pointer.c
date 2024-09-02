#include<stdio.h>

void square(int n);
void _square(int *n);

int main(){
    int n = 4;
    square(n);
    printf("Number: %d\n", n);

    _square(&n);
    printf("Number: %d\n", n);

    return 0;
}

//call by value
void square(int n){
    n = n*n;
    printf("Square: %d\n", n);
}

//call by reference
void _square(int *n){
    *n = (*n)*(*n);
    printf("Square: %d\n", *n);
}
