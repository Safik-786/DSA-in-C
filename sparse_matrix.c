#include <stdio.h>

int display( int a[100][100])
{
    int r,c,n,i,j,k;
    r=a[0][0] ;
    c=a[0][1] ;
    n=a[0][2] ;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            for ( k = 1; k <= n; k++)
            {
                if (a[k][0]==i&&a[k][1]==j)
                {
                    printf("%d  ",a[k][2]);
                    break;
                }
                
            }
            
        if (k==n+1)
        {
            printf("0  ");
        }
            
        }

    printf("\n");
        
    }
    return 0;
    
}

int main()
{
    int r, c, i, j, item, a[100][100];
    printf("enter row and column:\n");
    scanf("%d %d", &r ,&c);
    printf("enter matrix element\n");
    int n = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &item);
            if (item != 0)
            {
                n++;
                a[n][0] = i;
                a[n][1] = j;
                a[n][2] = item;
            }
        }
        printf("\n");
    }
    a[0][0] = r;
    a[0][1] = c;
    a[0][2] = n;

    display(a);

    return 0;
}