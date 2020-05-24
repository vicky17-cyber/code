#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isempty();
void add_first(int rollno);
void del_first();



struct database{
	int rollno;
	struct database *next;

};struct database *head;

//checking empty condition
bool isempty(){
	return head==NULL;
}


//adding at first
void add_first(int rollno){
	struct database *ptr=(struct database*)malloc(sizeof(struct database));
	ptr->rollno=rollno;
	if(isempty())
	{
		head=ptr;
		head->next=head;
	}
	else
	{
		ptr->next=head;
		head=ptr;
	
	}
}

//deleting first element
void del_first(void){
	struct database *ptr=head;
	if(head->next==head)
	{
		head=NULL;
	
	}
	else{
		head=head->next;
	}
}
//printing the list elememts
void prt_elements()
{
	struct database *ptr1=head;
	printf("From initial list\n");

	if(head!=NULL){
		while(ptr1->next!=ptr1)
		{
			printf("elememnt %d\n",ptr1->rollno);
			ptr1=ptr1->next;
		}
		printf("elements %d\n",ptr1->rollno);
	}
	
	else{
		printf("List is empty\n");
	}
}


int main()
{
	add_first(4);
	add_first(3);
	add_first(2);
	add_first(1);
	prt_elements();
	del_first();
	printf("After deleting\n");
	prt_elements();




}
