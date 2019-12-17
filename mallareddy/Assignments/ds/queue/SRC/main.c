#include"header.h"
int main()
{
    int queue[MAX];
    while(1){
        printf("...Main...\n1.Enqueue\n2.Dequeue\n3.Display\n4.Quit\n");
        switch(input()){
            case 1:enqueue(queue);
                    break;
            case 2:dequeue(queue);
                    break;
            case 3:display(queue);
                    break;
            case 4:exit(0);
            default :printf("Please,Enter valid input\n");
        }
   }
   return 0;
}


