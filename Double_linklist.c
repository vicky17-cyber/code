#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

struct database
{
	int rollno;
	struct database *next;		//self referencing pointer towards right
	struct database *previous;	//self referencing pointer towards left

};
struct database  *head=NULL;
struct database  *last=NULL;

void add_forward(int);
void add_last(int);
void prt_forward(void);
void prt_reverse(void);
bool isempty();




////////////checking if the list is empty 
bool isempty(){
	return head==NULL;

}


//display forward  elements
void prt_forward(){


struct database *ptr=head;
if(ptr==NULL){
	printf("Empty list\n");

}
else{
while(ptr!=NULL){
	printf("printing from forward rollno=%d \n",ptr->rollno);
	ptr=ptr->next;

}
}
}


//display from reverse elements
void prt_reverse(){
struct database *ptr=last;
	if(last==NULL){
		printf("Empty list\n");
	
	}
	else{
		while(ptr!=NULL){
			printf("printing from reverse rollno=%d\n",ptr->rollno);
			ptr=ptr->previous;
		
		}
	
	}

}



//Adding element at first
void add_first(int rollno){
	struct database *link=(struct database *)malloc(sizeof (struct database));
	link->rollno=rollno; 
	if(isempty())
	{
		last=link; 	



	
	}
	else{
		head->previous=link;
	
	 link->next=head;
	}
	 head=link;
	}

//Adding element at last
void add_last(int rollno){
	struct database *link=(struct database *)malloc(sizeof (struct database));
	link->rollno=rollno; 
	if(isempty())
	{
		last=link; 	
	
	}
	else{
		last->next=link;
	 	link->previous=last;
	}
	 last=link;
}

//delelting first element

void  del_first(){
	struct database *temp=head;
	if(head->next==NULL)
	{
	
		last=NULL;		//storing in last only ie if single element
	}
	else{
		head->next->previous=NULL;
	
	}
	head=head->next;
}



//delting last elememt
void del_last(){
	struct database *temp=last;
	if(head->next==NULL)
	{
		head=NULL;
	}
	else{
		last->previous->next=NULL;	
	
	}
	last=last->previous;


}



int main()
{

	add_first(3);
	add_first(2);
	add_first(1);
	add_last(4);
	add_last(5);
	printf("//////////////////elements from first/////////////\n");
	prt_forward();
	printf("////////elements from reverse///////////////////\n");
	prt_reverse();
	del_first();
	printf("//////////After deleting only first element////////////\n");
	prt_forward();
	del_last();
	printf("////////////After deleting last element only////////////\n");
	prt_forward();

}







