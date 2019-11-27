#include<iostream>
using namespace std;
int main()
{
    int n,g,i,sum=0,avg;
    cout<<"number of students in class"<<endl;
    cin>>n;


    for(i=0;i<n;i++)
    {
        cout<<"enter integer grade of student"<<endl;
    cin>>g;
    sum+=g;

    }
    avg=sum/n;
    cout<<"the average grade for the class is"<<avg;
    return 0;
}
