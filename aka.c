#include<stdio.h>
int main()
{
    int a,count=0;
    for(int i=101;i<1000;i++)
    {
        if((i%4!=0)&&(i%5!=0))
           count++;

    }
    printf("%d",count);

}
