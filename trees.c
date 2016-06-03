#include"stdio.h"
#include"conio.h"
struct node
{
	int info;
	struct node *left,*right;
}node;
struct node *root,*p,*tem,*root1;
int choice=1,data,min;
int main()
{
	root1=root;
	Createtree();
	while(choice!=0)
	{
	printf("\n\nEnter your choice..\n 1. Preorder Traversal\n 2. Inorder Traversal\n 3. Postorder Traversal\n 4. Delete a node\n 0.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
                  case 1: 
	                   printf("\n\nThe tree in preorder form is :-\n");
	                   Preorder(root);
	                   break;
	
                  case 2:
                       printf("\n\nThe tree in inorder form is :- \n");
	                   Inorder(root);
	                   break;
	                   
                  case 3:
	                   printf("\n\nThe tree in postorder form is :- \n");
	                   Postorder(root);
	                   break;
	                   
	              case 4:
	                	printf("Enter data to be deleted :\n");
    				    scanf("%d",&data);
    				    
	 				    Delete(root,data); 
						break;        

     }     
     }  
     	getch();
}

int Createtree()
{
	struct node *temp,*cur;
	int i,j=1;
	root=malloc(sizeof(node));
	printf("Enter a number for root:\n\n");
	scanf("%d",&root->info);
	root->left=NULL;root->right=NULL;
	
	while(j!=0)
	{
	i=1;cur=root;
	temp=malloc(sizeof(node));
	printf("\nEnter a number:\n\n");
	scanf("%d",&temp->info);
	temp->left=NULL;temp->right=NULL;
	while(i!=0)
		{
			if(temp->info<cur->info)
			{
				if(cur->left==NULL)
				{
				cur->left=temp;
				i=0;
				}
				else
				cur=cur->left;
			}
			else
			{
				if(cur->right==NULL)
				{
				cur->right=temp;
				i=0;
				}
				else
				cur=cur->right;
			}
	
		}	
	printf("For more entries,press 1 else 0 to exit\n");
	scanf("%d",&j);
	}
}

int Preorder(struct node *root)
{
	if(root==NULL)
	return;
	printf("%d  ",root->info);
	Preorder(root->left);
	Preorder(root->right);
}

int Inorder(struct node *root)
{
	if(root==NULL)
	return;
	Inorder(root->left);
	printf("%d  ",root->info);
	Inorder(root->right);
}
	
int Postorder(struct node *root)
{
	if(root==NULL)
	return;
	Postorder(root->left);
	Postorder(root->right);
	printf("%d  ",root->info);
}

int Delete(struct node *root,int data)
{
    int f=0;
	if(root==NULL)
	return;
	if(data<root->info)
		{
			p=root;
			Delete(root->left,data);
		}	
	
	else if(data>root->info)
		{
			p=root;
			Delete(root->right,data);
		}		
	//printf("%d\n",root->info);
	
	//Case 1
	if(root->left ==NULL && root->right==NULL)
	{
		printf("1\n");
		if((p->left)==root)
		{p->left=NULL;
		f=1;}
		else
	   {	p->right=NULL;
		f=1;}
		
		
	}
	
	//Case 2
	else if(f!=1)
    {
         if(root->left==NULL && root->right!=NULL)
		{
			printf("2\n");
			if((p->left)==root)
			{	p->left=root->right;
			f=1;}
			else
			{	p->right=root->right;
                f=1;}	
		
		}
         else if(root->right==NULL && root->left!=NULL)
		{
			printf("3\n");
			if(p->left==root)
				{p->left=root->left;
				f=1;}
			else
				{p->right=root->left;
				f=1;}
	
		}
	else if((root->left)!=NULL && (root->right)!= NULL)
	   {
	        min=(root->right)->info;
	          search(root->right);
        	printf("%d",min);
         	root->info=min;
         	p=root;
          	Delete(root->right,min);
       	}
  }
}
	
	
	
int search(struct node *root)
{
  if(root==NULL)
  return;
  if(root->info < min)
  {
  
  min=root->info;
  //printf("\nmin");
  }
  search(root->left);
  search(root->right);
}















