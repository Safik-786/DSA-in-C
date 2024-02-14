#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt","r");
    int no;
    fscanf(fptr,"%d",&no);
    printf("%d\n",no);
    fscanf(fptr,"%d",&no);
    printf("%d\n",no);
    fscanf(fptr,"%d",&no);
    printf("%d\n",no);
    fscanf(fptr,"%d",&no);
    printf("%d\n",no);
    fscanf(fptr,"%d",&no);
    printf("%d\n",no);
    fscanf(fptr,"%d",&no);
    printf("%d\n",no);

    fclose(fptr);
    return 0;
}
