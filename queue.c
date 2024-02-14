#include <stdio.h>
#include <stdlib.h>
#define N 5 
int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
    if (rear == N - 1)
    {
        printf("stack overflow..!\n");
    }
    else if (front = -1 && rear == -1)
    {
        front=rear=0;
        printf("insert a element in queue:\n");
        scanf("%d",&queue[rear]);
    }
    else
    {
        rear++;
        printf("enter element in queue:\n");
        scanf("%d",&queue[rear]);
    }
}

void dequeue()
{
    if (front = -1 && rear == -1)
    {
        printf("stack underflow....!\n");
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("%d element is deququed:\n",queue[front]);
        front++;
    }
}

void traverse()
{
     if (front = -1 && rear == -1)
    {
        printf("stack underflow....!\n");
    }
    else
    {
        for (int i = front; i <=rear; i++)
        {
            printf("%d\t",queue[i]);
        }
        
    }
}

int main()
{
    printf("click: 1 for enquque...!\n");
    printf("click: 2 for dequque...!\n");
    printf("click: 3 for traverse...!\n");
    printf("click: 4 for exit...!\n");
    int ch;
    while (1)
    {
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("enter valid option...!\n");
        }
    }

    return 0;
}