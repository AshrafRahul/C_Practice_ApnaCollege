#include<stdio.h>

int countOdd(int a[], int n);

int main(){
    int a[]={1,2,3,4,5};
    printf("%d", countOdd(a, 5));

    return 0;
}

int countOdd(int a[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    return count;
}