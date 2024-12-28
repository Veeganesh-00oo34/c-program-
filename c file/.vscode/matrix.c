#include<stdio.h>
#include<conio.h>
int main()
{
  int i,b[100][100],j,c[100][100],m[100][100],k;
  
  
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("ente the number %d%d",i,j);
        scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("ente the number %d%d",i,j);
        scanf("%d",&c[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("%d\t",b[i][j]);

    }
    printf("\n");
  }
  printf("\n");
 
  
  for(i=0;i<3;i++){
  
    for(j=0;j<3;j++)
    {
     for(k=0;k<3;k++ )
     {
        m[i][j]+=b[i][k]*c[k][j];
     }

    }
   
  }
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("%d\t",m[i][j]);

    }
    printf("\n");
  }

  getchar();
return 0;
  

   
}


