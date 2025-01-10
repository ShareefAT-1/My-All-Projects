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
int getcount(struct node *head)
{
    int count = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertATposition(struct node **head, int pos)
{
    int data;
    int count = getcount(*head);
    if (pos > count)
    {
        printf("Invalid Position");
    }
    else if (pos==1)
    {
         printf("Enter New Data :");
        scanf("%d", &data);
        struct node *newnode = create(data);
        newnode->next = *head;
        *head=newnode;

    }
    

    else
    {
        int i = 1;
        struct node *temp = *head;
        struct node *prev;
        while (i < pos)
        {
            prev=temp;
            temp = temp->next;
            i++;
        }
        printf("Enter New Data :");
        scanf("%d", &data);
        struct node *newnode = create(data);
        newnode->next = temp;
        prev->next=newnode;
    }
}
void prnt(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d,", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int pos;
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
    printf("Enter A Position :");
    scanf("%d", &pos);
    insertATposition(&head, pos);
    prnt(head);
}