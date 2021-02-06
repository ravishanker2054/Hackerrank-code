#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	while(n--)
	{
		int b,d;
		cin>>b>>d;
		for(int i=b;i<=d;i++) // --> O(d-b)
			c++;
		//c+=(d-b); --> Better O(1)
	}
	cout<<c<<endl;
	return 0;
}
