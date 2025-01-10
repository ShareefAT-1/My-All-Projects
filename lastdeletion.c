#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(int data)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void prnt(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("->%d", temp->data);
        temp = temp->next;
    }
}
void delt(struct node*head){
   
    struct node *temp=head;
     struct node *prev;
    while (temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    
}

int main()
{
    int data;
    int choice = 1;
    struct node *head = NULL;
    struct node *temp;

    while (choice)
    {
        printf("Enter data :");
        scanf("%d", &data);
        struct node *newnode = create(data);
        if (head == NULL)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do You Want To Enter More Data (0 or 1):");
        scanf("%d", &choice);
    }
    delt(head);
    prnt(head);
}