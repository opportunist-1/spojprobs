#include<stdio.h>
long numrev(long int x)
{
		int rem,rev=0;
		while(x>0)
		{
			rem=x%10;
			rev=rev*10+rem;
			x/=10;
		}
		return rev;
}
int main()
{
	int N;
	long int a,b,c,d,e;
	
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d%d",&a,&b);
		c=numrev(a);
		d=numrev(b);
		e=c+d;
		printf("%l\n",numrev(e));
	}
	return 0;
}

