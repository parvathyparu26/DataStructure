#include <stdio.h>  
  
void  main()  
{  
    int a[10],i,n;
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
    printf("%d",a[i]);
}
output
enter the limit5
enter the element1 2 3 4 5
the array is12345
