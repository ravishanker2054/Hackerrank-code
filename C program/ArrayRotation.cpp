#include<iostream>
#include<vector>
using namespace std;
void rotateNoob(int a[],int n)
{
	int temp=a[0];
	for(int i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
void rotateMedium(int a[],int n,int d)
{
	vector<int> b;
	for(int i=d;i<n;i++)
		b.push_back(a[i]);
	for(int i=0;i<d;i++)
	{
		b.push_back(a[i]);
	}
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	puts(" ");
}
void reverse(int a[],int s,int e)
{
	while(s<e)
	{
		swap(a[s],a[e]);
		s++; e--;
	}
}
void rotatePro(int a[],int n,int d)
{
	// 1 2 3 4 5 , d-->3
	reverse(a,0,d-1); // 3 2 1 4 5 
	reverse(a,d,n-1); // 3 2 1 5 4
	reverse(a,0,n-1); // 4 5 3 2 1
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	puts("");
}
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	int d;
	cin>>d;
	rotateMedium(a,n,d%n);
	rotatePro(a,n,d%n);
	cout<<endl;
	for(int i=0;i<d%n;i++)
	{
		rotateNoob(b,n);
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
}
