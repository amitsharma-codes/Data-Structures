#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	struct student* link;
};
struct student* addLast(struct student* ptr);
struct student* removeLast(struct student* ptr);
void display(struct student* ptr);
