#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertion(struct node *head, int index, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (index == 0)
    {
        ptr->data = data;
        ptr->next = head;
        ptr = head;
        return head;
    }
    else
    {
        struct node *p = head;
        int i=0;;
        while (i != index-1)
        {
            p = p->next;
            i++;
        }
            ptr->next=p->next;
            ptr->data=data;
            p->next=ptr;
            return head;
    }
    
}

void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
struct node *createNode(int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}

int main()
{
    int index,item;
    struct node *head, *second, *third, *fourth, *fifth;
    head = createNode(5);
    second = createNode(18);
    third = createNode(19);
    fourth = createNode(65);
    fifth = createNode(91);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    traverse(head);

    printf("\nenter index where you want to insert:");
    scanf("%d", &index);

    printf("\nenter element that you want to insert:");
    scanf("%d",&item);

    head=insertion(head, index, item);

    printf("after insertion at loc %d  linked list becomes:\n",index);
    traverse(head);

    return 0;
}