#include<stdio.h>

int main(){
    int i, n, *ptr;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int a[n];

    ptr=&a[0];
    printf("Elements are: \n");
    for(i=0; i<n; i++){
        printf("a[%d]: ", i);
        scanf("%d", ptr);
        ptr++;
    }

    printf("\n");
    ptr=&a[n-1];

    printf("Elements in reverse order: ");
    for(i=n; i>0; i--){
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}

