#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[];
};

int main(){
    struct student swe[100];
    swe[0].roll = 1664;
    swe[0].cgpa = 9.2;
    strcpy(swe[0].name, "Ashraful");

    printf("Name: %s\n", swe[0].name);
    printf("Roll: %d\n", swe[0].roll);
    printf("CGPA: %.2f\n", swe[0].cgpa);
}