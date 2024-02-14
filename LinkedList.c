#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next; 
};
void TraverseLinkedList( struct node*ptr)
{
    while (ptr!=NULL)
    {
        printf("Element=%d\n Location=%u\n",ptr->data,ptr);
        ptr=ptr->next;
    }
    
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    head ->data= 7;         
    head ->next=second;
    second ->data= 45;
    second ->next=third;
    third ->data= 76;
    third ->next=fourth;
    fourth ->data= 78;
    fourth ->next=fifth;
    fifth ->data= 8;
    fifth ->next=NULL;

    TraverseLinkedList(head);

}

