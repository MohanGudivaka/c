#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
 cin>>t;
 while(t--)
 {
     int n,i,l,r,v=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
    for(int i=0;i<n;i++)a[i]=(a[i]*a[i]);
     for (int i = n-1; i >= 2; i--)
    {
        int l = 0;
        int r = i-1;
        while (l < r)
        {
            if (a[l] + a[r] == a[i])
            {
                v=1;
                break;

            }

            (a[l] + a[r] < a[i])?  l++: r--;
        }
        if(v==1)
        {
            cout<<"yes"<<endl;
            break;


}

    }
    if(v==0)
        cout<<"no"<<endl;

}
}
