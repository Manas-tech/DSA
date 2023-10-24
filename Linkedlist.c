#include <stdio.h>
#include <stdlib.h>

typedef struct Linkedlistnode
{
    int data;
    struct Linkedlistnode*next
}node;

node *start,*temp;

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
        node*ptr=start;   
    while(ptr->next!=NULL){
        ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void DoubleNodeValue(int position) {
    node* current = start;
    int count = 1;

    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }

    if (current != NULL) {
        current->data = current->data * 2;
        printf("->Doubled the value at position %d\n->New value is %d\n", position, current->data);
    } else {
        printf("Node at position %d does not exist\n", position);
    }
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

int main()
{
    int choice,position;
    while (1) {
        printf("\nLINKED LIST MENU:\n");
        printf("1. CREATE LIST\n");
        printf("2. DISPLAY LIST\n");
        printf("3. DOUBLE THE ELEMENT OF THE LINKED LIST\n");
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
                printf("Enter the position of the node you want to double: ");
                scanf("%d", &position);
                DoubleNodeValue(position);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice \n");
        }
    }
   
    return 0;
}