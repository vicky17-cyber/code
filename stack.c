#include<stdio.h>
#define max 8

//creating structure for stack
struct stack{
int top;
int stack_size[8];	// Maximum size of stack is 8

};struct stack s ;

void push(void );
void pop(void);
void printsp(void);


int main()
{
	int option=0;
	s.top=-1;	// initialising stack value as 0
	while(1)
	{
	printf("option 1====>>>>>>>>>>>  push elelmemts\n");
	printf("option 2====>>>>>>>>>>>  pop  elelmemts\n");
	printf("option 3====>>>>>>>>>>>  print elelmemtsin stack\n");
	printf("option 4====>>>>>>>>>>>  exit\n");
	scanf("%d",&option);
	   switch (option)
	   {
	   case 1:push();
		  break;
	   case 2:pop();
		  break;
	   case 3:printsp();
		  break;
	   case 4:return(0);
		  break;
	   }
	}
}
void push()
{
	int pu=0;
	if(s.top!=(max-1))
	{
	printf("------------element to be pushed into stack------------\n");
	scanf("%d",&pu);
	s.top=s.top+1;
	s.stack_size[s.top]=pu;	
	}
	else
	{
		printf("/////////////////Stack is full//////////////////////////////\n");
	}
}
void pop()
{
	int po=0;
	if(s.top==-1)
	{
		printf("/////////////////////////Stack is empty/////////////////////\n");
	}
	else
	{
		po=s.stack_size[s.top];
		printf("/////////////////poping out of stack/////////////////\n %d\n",s.stack_size[s.top]) ;
		s.top=s.top-1;
	}
}
void printsp()
{
	int pr;
	if (s.top==-1)
	{
	printf("////////////////////////////////Stack is empty//////////////////////\n");
	}
	else
	{
		printf("complete stack \n");
		for(pr=s.top;pr>=0;pr--)
		{
			printf("%d  ",s.stack_size[pr]);
		}
	}
}























