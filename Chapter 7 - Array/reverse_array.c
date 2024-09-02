#include<stdio.h>

void reverse(int a[], int n);
void printArr(int a[], int n);

int main(){
    int a[]={1,2,3,4,5};
    reverse(a,5);
    printArr(a,5);

    return 0;
}

void printArr(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n){
    for(int i=0; i<n/2; i++){
        int firstVal = a[i];
        int secondVal = a[n-i-1];
        a[i] = secondVal;
        a[n-i-1] = firstVal;
    }
}