#include<stdio.h>
int main()
{
	int n,t,r=0;
	
	printf("Enter A Number: ");
	scanf("%d",&n);
	
	while(n>=1)
	{
		t=n%10;
		r=r*10+t;
		n=n/10;	
	}
	printf("Reversed Number is %d",r);
	return 0;
}
