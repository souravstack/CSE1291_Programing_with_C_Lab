#include<stdio.h>
int main()
{
	int n,m,i,r;
	printf("Enter any num : ");
	scanf("%d",&n);
	printf("ith msb:");
	scanf("%d",&m);
	for(i=1; i<=m; i++)
	{
		r=n%10;
		n=n/10;
	 }
	 if(n!=0 || r!=0)
	printf("%d",r);
	else
	printf("Sorry,doesn't exist");
	return 0;
}
