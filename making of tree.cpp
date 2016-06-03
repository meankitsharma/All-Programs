#include<stdio.h>
#include<conio.h>

struct node{
int info;
struct node *left;
struct node *right;
}node;

struct node *create(struct node *root,int data)
{

root=malloc(sizeof(node));
root->left=NULL;
root->right=NULL;
printf("enter the root value");
scanf("%d",&root->info);
}

