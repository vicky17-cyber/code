#include<stdio.h>
#include<stdlib.h>

struct database
{
	int rollno;
	struct database *left;
	struct database *right;

};
extern struct database * root ;
 struct database * root = NULL;

void in_order(struct database *);
void add_elem(void);

int main()
{
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			add_elem();
			printf("printing in in_order method \n");
			in_order(root);
}


void add_elem(void)
{
	struct database *current_node=root;
	struct database *temp_ptr=(struct database *)malloc(sizeof(struct database));

	printf("Enter the values");
	scanf("%d",&temp_ptr->rollno);

	temp_ptr->left=NULL;
	temp_ptr->right=NULL;

	if(root==NULL)
			{
				root=temp_ptr;

			}
	else
	{
		while(current_node!=NULL)
		{
			
			if((temp_ptr->rollno)>(current_node->rollno))
			{
				if(current_node->right!=NULL)
				{
					current_node=current_node->right;
				}
				else
				{
					current_node->right=temp_ptr;
					return;
				
				}
			}
			else
			{
				if(current_node->left!=NULL)
				{
					current_node=current_node->left;
				}
				else
				{
					current_node->left=temp_ptr;
					return;

				}
			}
		
		}
	}

}


/*printing the elememts using in_order function  */
void in_order(struct database *node)
{
	if(node==NULL)
	{
		return;
	}
	else
	{
		in_order(node->left);
		printf("%d\n",node->rollno);
		in_order(node->right);
	
	}
}




























