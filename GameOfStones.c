#include<stdio.h>
#include<string.h>
int main()
{
  int i,arr[100],t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
 for(i=0;i<t;i++)
    {
        if(((arr[i]%7)==0)||((arr[i]%7)==1))
        printf("Second\n");
        else 
        printf("First\n");
    }
    
return 0;
}

