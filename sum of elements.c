#include <stdio.h>  
  void  main()  
{  
    int a[20],n,i,sum=0;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        printf("%d",i);
        scanf("%d",&a[i]);
    }
    printf("the array is");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        printf("%d",sum);
    }
}
output
enter the limit4
enter the element4 6 2 1
  13
