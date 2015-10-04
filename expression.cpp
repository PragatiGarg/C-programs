#include<stdio.h>
#include<conio.h>
#include<stack.h>
#include<string.h>
int main()
{
	int i,valid=1,n;
	char exp[20],t;
	initialise();
	printf("Enter expression ");
	scanf("%s",&exp);
	n=strlen(exp);
	for(i=0;i<n;i++)
	{
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
			push(exp[i]);
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
		{
			if(s.top==-1)
				valid=0;
			else
			{
				t=pop();
				if(exp[i]==')'&&(exp[i]=='{'||exp[i]=='['))
					valid=0;
				else if(exp[i]=='}'&&(exp[i]=='('||exp[i]=='['))
					valid=0;
				else if(exp[i]==']'&&(exp[i]=='('||exp[i]=='{'))
					valid=0;				
			}
		}
	}	
	if(s.top>=0)
		valid=0;
	if(valid==1)
		printf("Expression is valid");
	else
		printf("Expression is not valid");
	getch();
	return 0;
}
