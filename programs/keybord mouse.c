#include<stdio.h>
int main(){
    int b,n,j,i,m,c=0,d=0,y=0;
    scanf("%d\n%d\n%d",&b,&n,&m);

    int a[n];int f[m],sum;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); //key
        for(j=0;j<m;j++)
    scanf("%d",&f[j]); //USB
    
for(i=0;i<n;i++){

    for(j=i;j<m;j++)
    {
     sum=a[i]+f[j];
    
        if(sum>d && sum<=b)
        {
        d=sum;
        y++;
    	}
        else if(y==0 && sum>b)
        c++;
    }

        
    
}
if(c==0)
printf("%d",d);
else
printf("-1");
}
