#include<Stdio.h>
void fun(int **p);
int main()
{int a[3][4]={1,2,3,4,4};
int *ptr;
ptr=&a[0][0];
fun(&ptr);
return 0;
}
void fun(int **p)
{  printf("%d\n",**p);
}
