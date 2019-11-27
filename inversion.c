#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
while(t--)
{int n;
   scanf("%d",&n);
   int a[n],i,j,c=0;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if((a[i]>a[j]))
           {
               c++;
           }
       }
   }

   printf("%d\n",c);

}

}
