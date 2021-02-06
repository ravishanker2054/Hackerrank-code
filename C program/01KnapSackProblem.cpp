// Author : Ashutosh Mishra
#include<iostream>
#include<vector>
using namespace std;
int knapsack(int c,int n,vector<int> w,vector<int> v)
{
	if(n==0 || c==0) return 0;
	else if(w[n-1]>c)return knapsack(c,n-1,w,v);
	else return max(v[n-1]+knapsack(c-w[n-1],n-1,w,v),knapsack(c,n-1,w,v));
}
int knapsackDynamic(int c,int n,vector<int> w,vector<int> v)
{
	int dp[n+1][c+1]; // n->value c->(weight or capacity)
	//dp[0][0]=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=c;j++)
		{
			if(i==0 || j==0) dp[i][j]=0;
			else if(w[i-1]<=c) dp[i][j] = max( v[i-1]+dp[i-1][j-w[i-1]] , dp[i-1][j] );
			else dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][c];
}

int main()
{
	int n,ip;
	vector<int> w,v;
	cin>>n;
	int c;
	cin>>c;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		w.push_back(ip);
	}
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	cout<<knapsack(c,n,w,v)<<endl;
	cout<<knapsackDynamic(c,n,w,v)<<endl;
}

