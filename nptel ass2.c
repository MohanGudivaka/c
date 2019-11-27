#include<stdio.h>

int main()
  {
  int n ,i,j;
   int a[n][n];
  int loc=1;
   scanf("%d",&n);
  for(int i=0;i<n;i++)
  { for(int j=0;j<n;j++)
  {scanf("%d",&a[i][j]);
  }}
  for(int  i=0;i<n;i++)
  { for(int j=0;j<n;j++)
  {

      if(j>i&&i>j || a[i][j]==0)
      {
        loc=2;
      }

  }
  }
  if(loc==2)
    printf("yes\n");

    else
    printf("no\n");
}
