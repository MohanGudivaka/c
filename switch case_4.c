#include<stdio.h>
#include<conio.h>
void main()
{
    int day;
    printf("Enter the day number");
    scanf("%d",&day);
    switch(day)
    {
       case 1:printf("Name of the day is Sunday",day);
        break;
        case 2:printf("Name of the day is Monday",day);
        break;
        case 3:printf("Name of the day is Tuesday",day);
        break;
        case 4:printf("Name of the day is Wednessday",day);
        break;
        case 5:printf("Name of the day is Thursday",day);
        break;
        case 6:printf("Name of the day is Friday",day);
        break;
        case 7:printf("Name of the day is Saturday",day);
        break;


    }
}
