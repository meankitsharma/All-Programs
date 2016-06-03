#include<stdio.h>
#include<conio.h>

struct node{
int info;
struct node *left;
struct node *right;
}node;

struct node *temp,*root,*comp;

int p=1;
int main()
{
root=malloc(sizeof(node));
root->left=NULL;
root->right=NULL;
printf("enter the root value");
scanf("%d",&root->info);

while( p!=0)
{

temp=malloc(sizeof(node));
  printf("enter temp value");
scanf("%d",&temp->info);
comp=malloc(sizeof(node));
comp=root;


if(temp->info<comp->info)
{    
 if(comp->left==NULL)
{
comp->left=temp;
printf("%d",temp->info);
}
else{
comp=comp->left;
   }
}else{
if(comp->right==NULL)
{

comp->right=temp;
printf("%d",temp->info);
}
else
{
comp=comp->right;
}
}
printf("do you want to proceed if yes press 1 else 0");
scanf("%d",&p);
}

//Preorder
int preorder(struct node *root)

{
	if(root==NULL)
	{
		return;
	}
	else
	{
		printf("%d",root->info);
		preorder(root->left);
		preorder(root->right);
	}
}
//inorder
int inorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
	
		inorder(root->left);
			printf("%d",root->info);
		inorder(root->right);
	}
}
//postorder
int postorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
	
		postorder(root->left);
		postorder(root->right);
			printf("%d",root->info);
	}
}
}
}

	

