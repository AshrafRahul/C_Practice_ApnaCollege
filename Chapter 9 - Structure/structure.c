#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    //s1.name = "Ashraful";
    strcpy(s1.name, "Ashraful");

    printf("Name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student CGPA: %.2f\n", s1.cgpa);
}