
#include <stdio.h>

int main()
{
    int a[100],b[100],n,i,count=0;
    printf("enter size of data");
    scanf("%d",&n);
    printf("enter a data");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter b data");
    for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);  
    }
    for(i=0;i<n;i++)
    {
       if((a[i]==0 && b[i]==1)||(a[i]==1 && b[i]==0))
       {
           count++;
       }
    }
    printf("hamming distance=%d",count);

}



