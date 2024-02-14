#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *traverse(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertAtBegin(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    head->prev = ptr;
    ptr->next = head;
    ptr->prev = NULL;

    return ptr;
}
struct node *deleteAtBegin(struct node *head)
{
    struct node *ptr = head;
    head = ptr->next;
    head->prev = NULL;
    free(ptr);
    return head;
}

int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 36;
    head->next = second;
    head->prev = NULL;

    second->data = 25;
    second->next = third;
    second->prev = head;

    third->data = 62;
    third->next = fourth;
    third->prev = second;

    fourth->data = 95;
    fourth->next = NULL;
    fourth->prev = third;

    int n;
    printf("enter elment that you want to insert:\n");
    scanf("%d", &n);

    printf("element before insertion:\n");
    traverse(head);
    head = insertAtBegin(head, n);
    printf("element after insertion:\n");
    traverse(head);
    head = deleteAtBegin(head);
    head = deleteAtBegin(head);             //  it will delete 36.
    printf("after deletion elements are:\n");
    traverse(head);

    return 0;
}
