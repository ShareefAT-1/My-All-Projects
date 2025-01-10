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
void DeletetATposition(struct node *head, int pos)
{
    int data;
    struct node*prev;
    int count = getcount(head);
    if (pos > count)
    {
        printf("Invalid Position");
    }
    else
    {
        int i = 1;
        struct node *temp = head;
        while (i < pos)
        {
            prev=temp;
            temp = temp->next;
            i++;
        }
        prev->next=temp->next;
        temp->next=NULL;
        free(temp);
        
    }
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
    scanf("%d",&pos);
    DeletetATposition(head,pos);
    prnt(head);
}