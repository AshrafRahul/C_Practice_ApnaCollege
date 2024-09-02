#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");
    
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 's');
    fprintf(fptr, "%c", 'h');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'h');
    fprintf(fptr, "%c", 'u');
    fprintf(fptr, "%c", 'l');
    
    fclose(fptr);

    return 0; 
}