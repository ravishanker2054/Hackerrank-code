#include<bits/stdc++.h>
#define debug(x) cout<<(#x)<<" "<<x<<endl;
using namespace std;
vector<bool> v;
void sieveErasthostene() // 1 2 3 4 5 6 7 8 9 10 11 12 
{
	int n=v.size();
	debug(n);
	for(int i=2;i<=n;i++)
	{
		if(v[i]){
			for(int j=i*i;j<=n;j+=i)
				v[i]=false;
		}
	}
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		v.clear();
		v.resize(n+2);
		for(int i=2;i<=n;i++)
		{
			v[i]=true;
			debug(v[i]);
		}
		sieveErasthostene();
		for(int i=0;i<=n;i++)
		{
			cout<<v[i]<<" ";
		}
	}
	return 0;
}
