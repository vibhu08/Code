#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left, *right;
};
int height(node*);//returning
int diameter(node*);//returning
struct node* newNode(int data)
{
  struct node* node = (struct node*) malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  cout <<"Diameter of the given binary tree is " <<diameter(root);
  return 0;
}






int height(node* root)
{
    if(root==NULL)
    return 0;
    
    int x=height(root->left);
    int y=height(root->right);
    return max(x,y)+1;
}
int diameter(node* root)
{
   if(root==NULL)
   return 0;
   
   int x=diameter(root->left);
   int y=diameter(root->right);
   int h1=height(root->left);
   int h2=height(root->right);
  
   return max(1+h1+h2,max(x,y));//maximum of left subtree,rightsubtree,(1+leftheight+rightheight)
}
















