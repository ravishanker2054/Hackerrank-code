#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//1 2 1 2 3 4 5 3 5
	int a[n],r=0;
	//1^1=0 0^1=1
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	r=r^a[i];
	}
	
	//omega(1);
	cout<<r; //O(1) O(logn) O(nlogn) O(n) O(n^2) 
	//f(n)=4n O(nlogn)
	//  
}
