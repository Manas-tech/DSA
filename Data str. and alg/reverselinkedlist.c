#include <stdio.h>
#include <stdlib.h>
typedef struct Linkedlistnode
{
    int data;
    struct Linkedlistnode*next
}node;
node *start,*temp,*rear;
void CreateList(){
    node*temp=(node*)malloc(sizeof(node));
    if (temp == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("enter the value\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        rear->next=temp;
    }
    rear=temp;
}
void Display(){
    if(start==NULL){
        printf("Underflow");
    }
    else{
        temp=start;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
node *reverse(){
    node *prev,*next1;
    while(start!=NULL){
        next1=start->next;
        start->next=prev;
        prev=start;
        start=next1;
    }
    start=prev;
    return start;
}
int main()
{
    int choice,position;
    while (1) {
        printf("\nLINKED LIST MENU:\n");
        printf("1. CREATE LIST\n");
        printf("2. DISPLAY LIST\n");
        printf("3. REVERSE\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                CreateList();
                break;
            case 2:
                printf("Linked List:\n");
                Display();
                break;
            case 3:
                printf("reverse\n");
                reverse();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice \n");
        }
    }
    return 0;
}