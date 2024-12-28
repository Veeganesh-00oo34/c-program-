#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main()
{
    char str1[50],str2[50],str3[50];
    int i,l1,l2 ,flag=1;
    printf("enter the string 1");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the string 2");
    fgets(str2,sizeof(str2),stdin);
    l1=strlen(str1);
    printf("the string lenth :%d\n",l1);
    l2=strlen(str2);
    printf("thestring2 lenth is :%d\n",l2);
    strcat(str1,str2);
   puts(str1);
   puts(str2);

}


