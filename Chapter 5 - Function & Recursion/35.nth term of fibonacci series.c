#include<stdio.h>

int fibSeries(int n);

int main(){
    int n;
    scanf("%d", &n);

    printf("Fibonacci series is: ");
    fibSeries(n);

    return 0;
}

int fibSeries(int n){
    int fib1 = 0, fib2 = 1, i, fibN;
    for(i=0; i<=n; i++){
        printf("%d ", fibN);
        fib1 = fib2;
        fib2 = fibN;
        fibN = fib1+fib2;

    }
}
