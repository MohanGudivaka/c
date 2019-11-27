#include<stdio.h>
int main()
{
int a[1000],n,i,count;
scanf("%d",&n);
count=n;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
  if(a[i]==a[i+1])
  {
  count=count-1;
  }


}
printf("%d",count);

}
