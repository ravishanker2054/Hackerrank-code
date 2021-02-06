#include<stdio.h>
void main(){
	int n,i,m,c=1,d=1,k;
	scanf("%d",&n);
	int a[n];
	int b[1000]={0};
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	//scanf("%d",&m);
	for(i=0;i<n;i++)
	{
	if(abs(a[i]-a[i+1])<=1)
	{
		c++;
		//a[i+1]=a[i];
		if(c>d)
		{  
		
		//1 1 2 2  2 2 2 3 3 3 4
		
		d=c;
	//	for(k=0;k<1000;k++){
		
		b[0]=d;
	//}
		}
		else
		c=1;d=1;
	}
	
	
	}
	

		
	printf("%d",b[0]);
}
