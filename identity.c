#include<stdio.h>
void main()
{
int i,j,x;
printf("enter the values of x ");
scanf("%d",&x);
for(i=0;i<x;i++){
for(j=0;j<x;j++)
{ if(i==j)
printf("%d\t",1);
else
printf("%d\t",0);
}
printf("\n");}

}
