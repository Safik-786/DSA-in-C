#include<stdio.h>
void display(int [100][3])
{
    int r,c,i,j,k,n;
    r=arr[0][0];
    c=arr[0][1];
    n=arr[0][2];
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            for ( k = 1; k <=n; k++)
            {
                if (arr[k][0]==i && arr[k][1]==j)
                {
                    printf("%d",arr[k][2]);
                }
                if (k=n+1)
                {
                    printf("0");
                }
                
            }
            
        }
        printf("\n");
    }
    
}

int main()
{
    int arr[50][50],item,r,c,i,j,n=0;
    printf("enter value of row and column:");
    scanf("%d %d",&r,&c);
    printf("enter value of the array:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("arr[%d][%d]",i,j);
            scanf("%d",&item);
            {
                if (item!=0)
                {
                    n++;
                    arr[n][0]=i;
                    arr[n][1]=j;
                    arr[n][2]=item;
                }
                
            }

        }
            printf("\n");
    }
    arr[0][0]=r;
    arr[0][1]=c;
    arr[0][2]=n;
    
display(arr);
}


