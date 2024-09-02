//make a program to read 5 integers from a file

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    
    int n;
    fscanf(fptr, "%d", &n);
    printf("Number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number: %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("Number: %d\n", n);
    
    
    fclose(fptr);

    return 0; 
}