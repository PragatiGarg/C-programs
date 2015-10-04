#include<stdio.h>
#include<conio.h>
#include<stack.h>
int main()
{
	int n,d;
	initialise();
	printf("Enter n ");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%2;
		push(d);
		n=n/2;
	}
	display();
	getch();
	return 0;
}
