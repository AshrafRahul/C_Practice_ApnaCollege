#include<stdio.h>

int sum(int n);

int main(){
    int n;
    scanf("%d", &n);

    printf("Sum of %d is: %d", n, sum(n));

    return 0;
}

int sum(int n){
    int sum=0;

    if(n==0){
        return 0;
    }

    while(n>0){
        int m = n%10;
        sum = sum+m;
        n = n/10;
    }
    return sum;
}
