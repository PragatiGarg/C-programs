#include<stdio.h>
#include<conio.h>
struct stack
{
	int data[20];
	int top;
}s;
void initialise()
{
	s.top=-1;
}
int empty()
{
	if(s.top==-1)
		return 1;
	else
		return 0;
}
int full()
{
	if(s.top==20)
		return 1;
	else
		return 0;
}
void push(int x)
{
	int f=full();
	if(f!=1)
	{
		
		s.top++;
		s.data[s.top]=x;
		
	}
	else
		printf("Stack overflow\n");
}
int pop()
{
	int d,e=empty();
	if(e!=1)
	{
		d=s.data[s.top];
		s.top--;
		return d;
	}
	else
	{
		printf("Stack Underflow\n");
		return -1;
	}	
}
void display()
{
	int i,e=empty();
	if(e!=1)
	{
		
		printf("Stack is: ");
		for(i=s.top;i>-1;i--)
			printf("%d\t",s.data[i]);
		printf("\n");
	}
	else
		printf("Stack Underflow\n");
}

