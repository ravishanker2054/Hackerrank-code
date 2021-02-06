#include<iostream>
#include<map>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
	IOS
	int n;
	cin>>n;
	int a[n];
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	m[a[i]]++;
	}
	for(int i=0;i<n;i++)
	if(m[a[i]]==1)
	cout<<a[i]<<endl;
	return 0;
	
}
