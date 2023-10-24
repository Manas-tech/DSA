#include<stdio.h>
#include<stdlib.h>
#define x 40

int rear=-1, front=-1;
int queue[x];

void enqueue()
{
    if(rear==x-1)
    printf("Overflow!");
    else
    {
        if(front==-1)
        {
            front++;
            rear++;
        }
        else
        {rear++;}
        printf("Enter Element :- ");
        scanf("%d",&queue[rear]);
    }
}
void dequeue()
{
    if(front==-1)
    printf("Underflow!");
    else
    printf("%d is deleted",queue[front]);   
    front++;
    if(front>rear)
    {
        front=-1;
        rear=-1;
    }
}
void display()
{
    if(front==-1)
    printf("Underflow!");
    else
    {
        for(int i=front;i<=rear;i++)
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid choice!!");
        }
    }    
}