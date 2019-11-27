#include<iostream>
using namespace std;
int noofdays(int,int,int);
bool isLeapYear(int);
int N=0;
int noofdays(int month,int day,int year)
{
    switch(month)
{
    case 1:return N+day;
    break;
    case 2:
        return 31+N+day;
        break;
    case 3:
        if(isLeapYear(year))
        {
            return 31+29+day;
        }
        else
        return 31+28+day;
        break;
        case 4:
        if(isLeapYear(year))
        {
            return 31+29+31+day;
        }
        else
        return 31+28+31+day;
        break;
        case 5:
        if(isLeapYear(year))
        {
            return 31+29+31+30+day;
        }
        else
            return 31+28+31+30+day;
        break;
        case 6:
        if(isLeapYear(year))
        {
            return 31+29+31+30+31+day;
        }
        else
            return 31+28+31+30+31+day;
        break;
        case 7:
        if(isLeapYear(year))
        {
            return 31+29+31+30+31+30+day;
        }
        else
            return 31+28+31+30+31+30+day;

        break;
        case 8:
        if(isLeapYear(year))
        {
            return 31+29+31+30+31+30+31+day;
        }
        else
            return 31+28+31+30+31+30+31+day;

        break;
        case 9:
        if(isLeapYear(year))
        {
            return 31+29+31+30+31+30+31+30+day;
        }
        else
            return 31+28+31+30+31+30+31+30+day;

        break;
        case 10:
        if(isLeapYear(year))
        {
            return 31+29+31+30+31+30+31+30+31+day;
        }
        else
            return 31+28+31+30+31+30+31+30+31+day;

        break;
        case 11:
        if(isLeapYear(year))
        {
            return 31+29+31+30+31+30+31+30+31+30+day;

        }
        else
            return 31+28+31+30+31+30+31+30+31+30+day;
        break;
        case 12:
        if(isLeapYear(year))
        {
            return 31+29+31+30+31+30+31+30+31+30+31+day;

        }
        else
            return 31+28+31+30+31+30+31+30+31+30+31+day;
        break;



}

}

bool isLeapYear(int year)
{

    if(((year%4==0)&&(year%100!=0)) ||(year%400==0))
        return true;
    else
        return false;
}
int main()
{
    int d,m,y;
    cin>>d>>m>>y;

    cout<<"no ofdays are:"<<noofdays(m,d,y);


}
