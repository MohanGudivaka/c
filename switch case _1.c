#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;
    int op;
    printf("Enter the values&operator");
    scanf("%f%f",&a,&b);
    printf("\n enter 1 for addition");
    printf("\n enter 2 for subtraction");
    printf("\n  enter 3 for multiplication");
    printf("\n enter 4 for division");

    scanf("%d",&op);
    switch(op)
    {
        case 1:printf("Result is%f",a+b);
        break;
        case 2:printf("Result is%f",a-b);
        break;
        case 3:printf("Result is%f",a*b);
        break;
        case 4:printf("Result is%f",a/b);

    }
}
