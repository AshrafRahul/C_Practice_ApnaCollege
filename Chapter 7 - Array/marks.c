#include<stdio.h>

int main(){
    int marks[3];
    printf("Enter Phy: ");
    scanf("%d", &marks[0]);

    printf("Enter Chem: ");
    scanf("%d", &marks[1]);

    printf("Enter Math: ");
    scanf("%d", &marks[2]);

    printf("Physics: %d ;  Chemistry: %d ; Math: %d\n", marks[0], marks[1], marks[2]);

    return 0;
}