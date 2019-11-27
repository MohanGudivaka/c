#include<stdio.h>
void main()
{ int a=0,b=1,c=0,d=0;
   if (a==1 && b==0)
      if(c==1 ||d==0) printf("one");
         else if(d==1) printf("two");
       else printf("three");

    else
        if(c==d) printf("four");
    else if(c==1) printf("five");
    else printf("six");

}
