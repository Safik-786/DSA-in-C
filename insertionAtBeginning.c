#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void TraverseLinkedList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element=%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *InsertAtFirst(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
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

    int n;
    printf("enter element thatr you want to insert:");
    scanf("%d",&n);
    printf("element before insertion:\n");
    TraverseLinkedList(head);
    head = InsertAtFirst(head, n);
    printf("element after insertion\n");
    TraverseLinkedList(head);

    return 0;
}