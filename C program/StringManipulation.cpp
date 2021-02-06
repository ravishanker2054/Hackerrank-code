// abc
// a,b,c
// bac bca cba cab acb 
#include<bits/stdc++.h>
using namespace std;
vector<string> op;
void store(vector<string> a)
{
	op.push_back(a);
	cout<<a<<" ";
}
int main()
{
	string s;
	cin>>s;
	do{
		store(s);
	}while(next_permutaion(s,s.size()));
	return 0;
}
