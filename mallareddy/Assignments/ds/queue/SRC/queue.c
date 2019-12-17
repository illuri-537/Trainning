#include"header.h"
void enqueue(int queue[])
{
    if(rear>=MAX)
        printf("Queue Overflow\n");
    else{
        int ele;
        printf("Enter the Element : ");
        ele=input();
        queue[++rear]=ele;
        printf("%d Element inserted Succesfully\n",ele);
    }
}
void dequeue(int queue[])
{
    if(front>rear)
        printf("Queue Underflow\n");
    else
        printf("dequed element is %d\n",queue[front++]);
}
void display(int queue[])
{
    int i;
    if(front>rear)
        printf("Queue is Empty\n");
    else
    {
        for(i=front;i<=rear;i++)
            printf("Element is %d\n",queue[i]);
    }
}
