#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct node *push(struct node *abc, int x)
{
    struct node *a = (struct node *)malloc(sizeof(struct node));
    if (a == NULL)
    {
        printf("stack overflow...!");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = abc;                  // it connect the linked list element.
        top = n;
        return top;
    }
}

int pop(struct node *tp)
{
    if (tp == NULL)
    {
        printf("stack underflow.....!");
    }
    else
    {
        struct node *b = tp;
        top = tp->next;
        int x = b->data;
        free(b);
        return x;
    }
}

int main()
{
    top = push(top, 36);
    top = push(top, 6);
    top = push(top, 3);
    top = push(top, 65);
    top = push(top, 89);
    top = push(top,98);

    traversal(top);

    int element=pop(top);
    printf("\n%d element popped \n",element);
    int c=pop(top);
    printf("\n%d element popped \n",c);


    traversal(top);
    return 0;
}
