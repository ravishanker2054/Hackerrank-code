#include<stdio.h>
int main()
{
    int n ,i;
    scanf("%d",&n);
    int h[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&h[i]);
    
    char h2[200];
    itoa (h[i],h2,16);
    printf("%s",h2);
}
}
