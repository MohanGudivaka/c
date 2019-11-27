#include<stdio.h>
int main()
{
  int n,row=0,loc=0,col;
  float a;
  scanf("%d",&n);
  while(row<n)
  {
    col=0;
    while(col<n)
    {
      scanf("%f",&a);
      if(col>row||row>col)
      { if(a==0)
        loc=2;
      }
      else
        loc=1;

      col=col+1;
    }
    row=row+1;
  }
  if(loc==1)
    printf("yes\n");
  else
    printf("no\n");
}
