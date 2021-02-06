#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	map<int,int> m;
	vector<int> v,s,res;
	int n,ip;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	int ns,j=0;
	cin>>ns;
	for(int i=0;i<ns;i++)
	{
		cin>>ip;
		s.push_back(ip);
	}
	m[v[0]]=1;
	for(int i=1;i<n;i++)
	{
		if(v[i-1]==v[i])
			m[v[i]]=m[v[i-1]];
		else 
			m[v[i]]=m[v[i-1]]+1;
	}
	for(int i=0;i<ns;i++)
	{
		j=0;
		while(v[j]>s[i] && j<n)
			j++;
		if(v[j-1]==s[i])
		res.push_back(m[v[j-1]]);
		else
		res.push_back(m[v[j-1]]+1);
	}
	for(int i=0;res[i];i++)
	cout<<res[i]<<endl;
	return 0;
}
