#include<iostream>
#define fo(i,n) for((i)=0;(i)<(n);(i)++)
#define inc(x) ++x
#define tp(b,c) b##c
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	fo(i,n)
	cout<<i<<" ";
	int a=5;
	cout<<inc(a)<<endl;
	int b=12,c=34;
	int d=tp(12,34);
	cout<<d+1<<endl;
	cout<<tp(12,34)<<endl;
	return 0;
}
