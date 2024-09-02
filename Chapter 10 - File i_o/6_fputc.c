#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");
    
    fputc('A', fptr);
    fputc('s', fptr);
    fputc('h', fptr);
    fputc('R', fptr);
    fputc('a', fptr);
    fputc('h', fptr);
    fputc('u', fptr);
    fputc('l', fptr);
    
    fclose(fptr);

    return 0; 
}