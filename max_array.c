#include<stdio.h>
main ()
{
  int i, n, a[10], max=0;
  printf("Enter the size of array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("MAX is %d",max);
}
