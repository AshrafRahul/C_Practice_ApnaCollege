#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1664, 9.2, "Ashraful"};

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);
}