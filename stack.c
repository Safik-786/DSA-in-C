#include <stdio.h>
#include <stdlib.h>
int stack[5], top = -1;
void push();
void pop();
void show();
int main()
{
    int ch;
    printf("click :1  for push\n");
    printf("click :2  for pop\n");
    printf("click :3  for show\n");
    printf("click :4  for exit\n");
    while (1)
    {
        printf("\n enter your choice:  ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid option\n");
            break;
        }
    }
}
void push()
{
    int item;
    if (top==5-1)
    {
        printf("stack is full \n");
    }
    else
    {
        printf("PUSH element in the array:\n");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
    
}
void pop()
{
    if (top==-1)
    {
        printf("STACK is empty\n");
    }
    else
    {
        printf("POPPED %d element \n",stack[top]);
        top=top-1;
    }
    
}
void show()
{
    int i;
    if (top>=0)
    {
        printf("stack elements are:\n");
        for (int i = top; i >=0; i--)
        {
            printf("%d \t",stack[i]);
        }    
    }
    else
    printf("stack is empty");
}