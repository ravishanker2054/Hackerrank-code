include<stdio.h>
void main()
{
    int n,c=0,d=0,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(j=0;j<n;j++)
    {
    
    for(i=0;i<n;i++)
    {
    
    scanf("%d",&a[j][i]);
  }
    }
  for(j=0;j<n;j++)
    {
    
    for(i=0;i<n;i++)
   {
  if(i==j)
  {
      c+=a[i][j];
  }
  if(j+i==n-1)
 {
     d+=a[i][j];
 }
   }
    }
    printf("%d",c-d);

}
