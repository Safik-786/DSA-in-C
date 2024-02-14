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

struct node *rev_LL(struct node *head)
{
    struct node *current = head;
    struct node *previous = NULL;
    struct node *temp = NULL;

    while (current != NULL)
    {
        temp = current->next;     // temp assign next to current.
        current->next = previous; // it will create reverse link.
        previous = current;       // it will help the previous to move 1 step.
        current = temp;           // it will help the current to move 1 step.
    }
    return previous;
}

int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    printf("enter 1st element in LL:");
    scanf("%u\n", &head->data);
    head->next = second;

    printf("enter 2nd element in LL:");
    scanf("%d\n", &second->data);
    second->next = third;

    printf("enter 3rd element in LL:");
    scanf("%d\n", &third->data);
    third->next = fourth;

    printf("enter 4th element in LL:");
    scanf("%d\n", &fourth->data);
    fourth->next = NULL;

    printf("before traversal linked list elements are:\n");
    TraverseLinkedList(head);

    head = rev_LL(head);

    printf("after reverse linkes list elements are:\n");
    TraverseLinkedList(head);

    return 0;
}
