/*Trapizium number pattern*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=1,l=n*n+1;
    int z=n;
    int y=l;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        printf(" ");
        for(int j=1;j<=z;j++)
        {
            printf("%d*",m);
            m++;

        }
      l=y;
         for(int j=1;j<=z;j++)
        {   if(j==z)
            printf("%d",l);
            else
            printf("%d*",l);
            l++;

        }

        z--;
        y-=z;
        printf("\n");

    }

}
