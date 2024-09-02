#include<stdio.h>

void printNumber(int a[], int n);

int main(){
    int a[]={1,2,3,4,5};
    printNumber(a, 5);

    return 0;
}

void printNumber(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
}