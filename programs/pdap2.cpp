#include<iostream>
using namespace std;
int main()
{
	int a,b,n,S;
	cin>>a>>b>>n>>S; //3 3 5 13
	while((n*a)>S)
	a--;
	if(S-(n*a)<=b)
	cout<<"YES";
	else
	cout<<"NO";
}
