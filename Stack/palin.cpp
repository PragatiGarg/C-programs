#include<stdio.h>
#include<conio.h>
#include<stack.h>
#include<string.h>
int main()
{
	int i,n,t;
	char a[10],s[10];
	initialise();
	printf("Enter string ");
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		t=int(s[i]);
		//printf("%d ",t);
		push(t);
	}	
	for(i=0;i<n;i++)
	{
		//printf("\ntest\n");
		a[i]=(char)pop();
		//printf("%c ",a[i]);
	}
	if(strcmp(s,a)==0)
		printf("String is palindrome");
	else
		printf("String is not palindrome");
	getch();
	return 0;
}
