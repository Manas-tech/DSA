#include<stdio.h>
#include<stdlib.h>
typedef struct insertioninlinkedlist
{
    int data;
    struct insertioninlinkedlist *next;
}insertioninlinkedlist;

insertioninlinkedlist *start, *temp,*rear;
int count=0;
void create_node(){
    temp=(insertioninlinkedlist*)malloc(sizeof(insertioninlinkedlist));
    printf("Enter the values\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
}
void insertatfirst(){
    create_node();
    count++;
    if(start==NULL){
        start=temp;
        rear=temp;
    }
    else{
        temp->next=start;
        start=temp;
    }
}
void insertatlast(){
    create_node();
    count++;
    if(start==NULL){
        start=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
    }
    rear=temp;
}
void insertatmiddle(){
    int position;
    printf("enter the node number: ");
    scanf("%d",&position);
    if(position>=1&&position<=count+1){
        if(position==1){
            insertatfirst();
        }
        else if(position==count+1){
            insertatlast();
        }
        else{
            create_node();
            count++;
            insertioninlinkedlist *p;
            p=start;
            for(int i=1;i<position-1;i++){
                p=p->next;
            }
            temp->next=p->next;
            p->next=temp;
            
        }
    }
}
void Display(){
    if(start==NULL){
        printf("Underflow");
    }
    else{
        insertioninlinkedlist *a=start;
        while(a!=NULL){
            printf("%d\n",a->data);
            a=a->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int choice,position;
    while (1) {
        printf("\nLINKED LIST MENU:\n");
        printf("1. INSERT AT FIRST\n");
        printf("2. INSERT AT MIDDLE\n");
        printf("3. INSERT AT LAST\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertatfirst();
                break;
            case 2:
                insertatmiddle();
                break;
            case 3:
                insertatlast();
                break;
            case 4:
                Display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice \n");
        }
    }
    return 0;
}