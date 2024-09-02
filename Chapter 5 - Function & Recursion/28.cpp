/*
Write a function that prints "Oi" if user is Bangladeshi
and "Hello" if user is English
*/

#include<stdio.h>

void printOi();
void printHello();

int main(){
	printf("Enter b for Bangladeshi & e for English: ");
	char ch;
	scanf("%c", &ch);
	 
	if(ch=='b'){
	 	printOi();
	}
	else{
	 	printHello();
	}
	
	return 0;
}

void printOi(){
	printf("Oi\n");
}
void printHello(){
	printf("Hello\n");
}
