#include <stdio.h>
int front = NULL;
int rear = NULL;

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *)
{
}

struct node *enqueue(struct node *front, struct node *rear, int data)
{
    struct node *a = (struct node *)malloc(sizeof(struct node));
    if (a == NULL)
    {
        printf("stack overflow...!");
    }
    else
    {
        
    }
}

int main()
{

    return 0;
}