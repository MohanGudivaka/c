#include<iostream>
using namespace std;
int main()
{

    int a=10;
    int* iptr=&a;
    *iptr=*iptr*3;
    cout<<*iptr;
    cout<<a;



    cout<<a%4-*iptr*a/a++;

}
