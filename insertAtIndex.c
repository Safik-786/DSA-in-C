//by using this program we can insert the element at any index except zero'th location.
//even we can insert at end node by this program.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *InsertAtIndex(struct node *head, int data, int index);//function declaration
void TraverseLinkedList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element=%d\n", ptr->data);
        ptr = ptr->next;
    }
}



int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 91;
    head->next = second;
    second->data = 45;
    second->next = third;
    third->data = 76;
    third->next = fourth;
    fourth->data = 78;
    fourth->next = fifth;
    fifth->data = 8;
    fifth->next = NULL;
    int index;
    printf("enter index location for insertion:");
    scanf("%d",&index);

    TraverseLinkedList(head);
    head = InsertAtIndex(head, 2525, index);
    printf("\n");
    TraverseLinkedList(head);
}

struct node *InsertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
    return 0;
}