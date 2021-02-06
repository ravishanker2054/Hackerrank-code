#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=0,outspace=n/2,inspace=-1,l=n/2;
	while(row<5)
	{
		for(int i=0;i<outspace;i++)
		cout<<" ";
		cout<<"*";
		if(inspace>0)
		{
			for(int i=0;i<inspace;i++)
			cout<<" ";
			cout<<"*";
		}
		for(int i=0;i<outspace;i++)
		cout<<" ";
		if(row<=l)
		{
			outspace--;
			inspace+=2;
		}
		else
		{
			outspace++;
			inspace-+2;
		}
		row++;
		cout<<endl;
	}
}
