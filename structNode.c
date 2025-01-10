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
        scanf("%d",&choice);
    }
    temp=head;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    
}