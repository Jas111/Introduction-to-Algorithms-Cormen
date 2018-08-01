#include<stdio.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int Cut_Rod(int p[],int n)
{
	if(n==0)	return 0;
	int q=-1,i;
	for(i=1;i<=n;i++)
	{
		q= max(q, p[i-1] + Cut_Rod(p, n-i));
	}
	
	return q;
}

main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	int p[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter price of %d item : ",i);
		scanf("%d",&p[i]);
	}
	
	printf("The maximized cost for rod cut is %d", Cut_Rod(p,n));
}
