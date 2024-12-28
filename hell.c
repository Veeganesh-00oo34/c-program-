#include<stdio.h>
int add(int a,int b,int y[50][50])
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("enter the matrix element (%d%d)",i,j);
            scanf("%d",&y[i][j]);
        }
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }
    return 0;

}

int main()
{
    int c=0,y[50][50];
    int j=0;
    printf("enter the DIMENTION of matrix");
    printf("enter the ROWS");
    scanf("%d",&j);
    printf("enter the COLUMN");
    scanf("%d",&c);
    add(c,j,y);
}