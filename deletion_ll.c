#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
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
struct node *deletion(struct node* head,int index)
{
    if (index==0)
    {
        struct node*ptr = head;
        head=head->next;
        free(ptr);
        return head;
    }
    else
    {
        struct node*p=head;
        struct node*q=p->next;
        for (int i = 0; i < index-1; i++)
        {
            p=p->next;
            q=q->next;
        }
        p->next=q->next;
        free(q);
        return head;
        
        
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

    traverse(head);
    head=deletion(head,2);
    traverse(head);
    return 0;
}