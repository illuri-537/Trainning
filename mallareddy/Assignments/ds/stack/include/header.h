#include<stdio.h>
#include<stdlib.h>
#define MAX 20
static int top=-1;
int input();
int validate(char*);
void input_str(char*);
void validate_str(char*);
void push(int[]);
void pop(int[]);
void display(int[]);
