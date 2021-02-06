#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ip,s1=n*(n+1)/2;
	int a[n],s=0;
	for(int i=0;i<n-1;i++)
	{
	cin>>a[i];
	s+=a[i];
	}
	cout<<s1-s;
}
