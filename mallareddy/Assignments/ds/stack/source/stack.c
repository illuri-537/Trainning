#include"header.h"
void push(int stack[])
{
    if(top>=MAX)
        printf("Stack Overflow\n");
    else{
        int ele;
        printf("Enter the Element : ");
        ele=input();
        stack[++top]=ele;
        printf("%d Element inserted Succesfully\n",ele);
    }
}
void pop(int stack[])
{
    if(top==-1)
        printf("Stack Underflow\n");
    else
        printf("Popped element is %d",stack[top--]);
}
void display(int stack[])
{
    int i;
    if(top==-1)
        printf("Stack is Empty\n");
    else
    {
        for(i=top;i>=0;i--)
            printf("%dth Element is %d\n",i,stack[i]);
    }
}
