#include"header.h"
int main()
{
    int stack[MAX];
    while(1){
        printf("...Choose any option...\n1.Push\n2.Pop\n3.Display\n4.Quit\n");
        switch(input()){
            case 1:push(stack);
                    break;
            case 2:pop(stack);
                    break;
            case 3:display(stack);
                    break;
            case 4:exit(0);
            default :printf("Please,Enter valid input\n");
        }
   }
   return 0;
}


