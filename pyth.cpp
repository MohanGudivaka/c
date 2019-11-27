#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,l,r;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        a[i]=a[i]*a[i];
	    }
	    sort(a,a+n);
	   for (int i = n - 1; i >= 2; i--) {
        int l = 0;
        int r = i - 1;
        while (l < r) {
            if (a[l] + a[r] == a[i])
            {
                cout<<"Yes"<<endl;
                return 0;
            }
            (a[l] + a[r] < a[i]) ? l++ : r--;
        }
    }

	    cout<<"No";
	}
	return 0;
}
