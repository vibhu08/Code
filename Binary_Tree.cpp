#include<bits/stdc++.h>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
int c;//parmanent variable
void fun1(node*,int);// non returning can have permanent or temporary variable ,here int is temporary varible
bool fun2(node*,int);// returning     can have permanent or temporary variable

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
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  cout <<"Preorder Traversal" << endl;
  fun1(root,0);
  cout <<"Postorder Traversal"<< endl;
  fun2(root,4);
  return 0;
}
void fun1(node* root,int level)//level           //use of temporary variable
{
    if(root==NULL)
    return;
    if(level==1)  cout << root->data << endl;
    fun1(root->left,level+1);
    fun1(root->right,level+1);
}
bool fun2(node* root,int num)//ancestor
{
    if(root==NULL)
    return false;
    if(root->data==num) return true;
    bool x=fun2(root->left,num);
    bool y=fun2(root->right,num);
    if(x||y) 
    {
        cout << root->data << endl;
        return true;
    }
    else
       return false;

}

 
