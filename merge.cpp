#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
	    vector <int> a;
	    int n,m,i,d;
	    cin>>n>>m;
	    for(i=0;i<n;i++)
	    {

	    cin>>d;
            a.push_back(d);
            }
            a.reserve(n+m);
            for(i=0;i<m;i++)
            {
                cin>>d;
                a.push_back(d);
            }
            sort(a.begin(),a.end());
            for(i=0;i<n+m;i++)
                cout<<a[i]<<' ';
            cout<<endl;

}
}
