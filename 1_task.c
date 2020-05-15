#include<stdio.h>
#include<stdlib.h>

struct database
{
	int rollno;
	char str[20];
	struct database *next;	//self referencing pointer

};struct database  *head=NULL;

void add_elem(void);
void prt_elem(void);


int main()
{

		int option=0;
	while(1)
	{
		printf("option 1-> Add_elememts\noption 2->print_elements\noption 3->exit\n");
		scanf("%d",&option);
		switch (option)
		{
		case 1:add_elem();
		       break;
		case 2:prt_elem();
		       break;
		case 3:exit(0);
		       break;
		default:printf("enter valid option\n");
			break;
		}
	}
}
void add_elem(void)
{	//Adding the elements to the list
 
	struct database *ptr=head;
	if(head==NULL)
	{
		head=(struct database *)malloc (sizeof(struct database));
		head->next=NULL;
		ptr=head;
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=(struct database *)malloc (sizeof(struct database));
		ptr->next->next=NULL;
	
	}
	printf("Enter the rollno and name\n");
	scanf("%d %s",&(ptr->rollno),ptr->str);
			ptr=ptr->next;
	return;
}

void prt_elem(void)
{	// printing the list elemesnts

	struct database *ptr=head;
	if(head==NULL)
	{
		printf("List Empty\n ");
		return;
	}
	else
	{
		while(ptr!=NULL)    	
		{
			printf("%d %s\n",ptr->rollno,ptr->str);
			ptr=ptr->next;
		}
		return;
	}
}











