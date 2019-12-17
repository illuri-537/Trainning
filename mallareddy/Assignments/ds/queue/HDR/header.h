#include<stdio.h>
#include<stdlib.h>
#define MAX 20
static int rear=-1;
static int front=0;
int input();
int validate(char*);
void input_str(char*);
void validate_str(char*);
void enqueue(int[]);
void dequeue(int[]);
void display(int[]);
