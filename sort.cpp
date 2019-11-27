#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{

    string s;
    int i,m,c=0;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        m=s[i]-'0';
        if(m==1)
            c++;
    }
    cout<<c;
    return 0;


}
