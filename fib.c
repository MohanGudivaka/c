#include<stdio.h>
int main()
{

    int n1=0,n2=1,n3,i,number;
 printf("Enter the number of elements:");
 scanf("%d",&number);
 int a[number];
 printf("\n%d %d",n1,n2);
 a[1]=n1;
 a[2]=n2;
 for(i=3;i<=number;++i)
 {
  n3=n1+n2;
  printf(" %d",n3);
  a[i]=n3%10;

  n1=n2;
  n2=n3;
 }
 if(number%2==0)
    printf("\n%d",a[number]);
 else
    printf("\n%d",a[number-1]);

}
