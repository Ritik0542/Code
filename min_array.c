#include<stdio.h>
main ()
{
  int i, n, a[10], min=0;
  printf("Enter the size of array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("MIN is %d",max);
}
