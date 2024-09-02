#include<stdio.h>

int main(){
    int n1, n2;
    int *ptr1, *ptr2;

    printf("Enter number1: ");
    scanf("%d", &n1);
    printf("Enter number2: ");
    scanf("%d", &n2);

    ptr1=&n1; //ptr1 stores address of number 1
    ptr2=&n2; //ptr2 stores address of number 2

    if(*ptr1>*ptr2){
        printf("Maximum number is: %d\n", *ptr1);
    }
    else if(*ptr1<*ptr2){
        printf("Maximum number is: %d\n", *ptr2);
    }
    else{
        printf("Numbers are equal\n");
    }

    return 0;
}
