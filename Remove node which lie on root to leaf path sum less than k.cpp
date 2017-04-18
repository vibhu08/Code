#include<bits/stdc++.h>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
void fun1(node*);//non returning
node* fun2(node*,int,int);// returning    

struct node* newNode(int data)
{
 
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
 
 
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(12);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->left->left->right->left = newNode(13);
    root->left->left->right->right = newNode(14);
    root->left->left->right->right->left = newNode(15);
  fun2(root,0,45);
  fun1(root);
  return 0;
}
void fun1(node* root)
{
    if(root==NULL)return;
    fun1(root->left);
    cout << root->data << " ";
    fun1(root->right);
}
struct node* fun2(node* root,int sum,int k)
{
    if(root==NULL)
    return NULL;
    root->left=fun2(root->left,sum+root->data,k);
    root->right=fun2(root->right,sum+root->data,k);
    if(root->left==NULL && root->right==NULL && sum+root->data<k)//Due to lagging
    {
        free(root);
        return NULL;
    }
    else
    {
        return root;
    }

}

 