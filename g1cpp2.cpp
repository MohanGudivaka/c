#include<iostream>
using  namespace std;
int main()
{
    bool a=true;bool b=1;bool c=false;
    if(((a&&b)||c)||(b||(a==c)))
    {
        cout<<"NO";
        if((a||b)&&(c!=b))
        {
            cout<<"your guess is correct"<<(b||c);

        }
        else
            cout<<"over";

    }

}
