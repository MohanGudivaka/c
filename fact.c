#include<stdio.h>
void fact(int,int,int);
void main()
{
    int num,a=0,b=1;
    printf("enter the number");
    scanf("%d",&num);
    printf("%d\t",a);
    printf("%d\t",b);
    fact(num,a,b);

}
void fact(int num,int a,int b)
{   int c;
int i;
    for(i=0;i<num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }





}
