/*
write a program to store data of three students
*/

#include<stdio.h>
#include<string.h>

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

    printf("\nName: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student CGPA: %.2f\n", s1.cgpa);

    printf("\n");
    struct student s2;
    s2.roll = 1665;
    s2.cgpa = 9.3;
    //s1.name = "Islam";
    strcpy(s2.name, "Islam");

    printf("Name: %s\n", s2.name);
    printf("Student roll: %d\n", s2.roll);
    printf("Student CGPA: %.2f\n", s2.cgpa);

    printf("\n");
    struct student s3;
    s3.roll = 1666;
    s3.cgpa = 9.25;
    //s3.name = "Rahul";
    strcpy(s3.name, "Rahul");

    printf("Name: %s\n", s3.name);
    printf("Student roll: %d\n", s3.roll);
    printf("Student CGPA: %.2f\n", s3.cgpa);
}