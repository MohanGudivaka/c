#include<iostream>
using namespace std;
void mergeArrays(int arr1[], int arr2[], int n1,
							int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;
	while (i<n1 && j <n2)
	{
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}
	while (i < n1)
		arr3[k++] = arr1[i++];
	while (j < n2)
		arr3[k++] = arr2[j++];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        int a[n],b[m];
        for(i=0;i<n;i++)
            cin>>a[i];
            for(i=0;i<m;i++)
                cin>>b[i];
	int ab[n+m];
	mergeArrays(a, b, n, m, ab);
	for (int i=0; i < n+m; i++)
		cout << ab[i] << " ";
    cout<<endl;
    }

	return 0;
}
