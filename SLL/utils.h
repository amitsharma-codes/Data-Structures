#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *link;
};
struct student* addFirst(struct student* ptr);
struct student* addLast(struct student* ptr);
struct student* removeLast(struct student* ptr);
struct student* removeFirst(struct student* ptr);
struct student* addSorted(struct student* ptr);
void middle(struct student* sptr);
void display(struct student* ptr);
void printPrime(struct student* ptr);
struct student* DelAll(struct student* ptr);
void printn(struct student* ptr);
void printnLast(struct student* ptr);
