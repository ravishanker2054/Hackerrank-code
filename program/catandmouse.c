
#include<stdio.h>
int main()
{
    int q,a,b,c,i,x,y;
    scanf("%d",&q);
	for(i=0;i<q;i++)
	{
    scanf("%d %d %d",&a,&b,&c);
    x=abs(a-c);
    y=abs(b-c);
    if(x<y)
    printf("Cat A\n");
    else if(x>y)
    printf("Cat B\n");
    else
    printf("Mouse C\n");    
    }
}
