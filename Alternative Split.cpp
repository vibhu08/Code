#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void push(struct node** start, int new_data)
{
struct node* t =(struct node*) malloc(sizeof(struct node));
t->data = new_data;
t->next = *start;	 
*start = t;
}
void printList(struct node *start)
{
    struct node*current=start;
while(current!=NULL)
{
  cout << current->data << " ";
  current=current->next;
}
} 

void fun(struct node* start, struct node** a, 
							struct node** b) 
{
   if(start==NULL) {*a=NULL;*b=NULL;return;}
   else if(start->next==NULL){*a=start;*b=NULL;return;}
   *a=start;
   *b=start->next;
   struct node* current1=start;
   struct node* current2=start->next;
   int f1=1;
   int f2=1;
   while(1)
   {
       if(current1!=NULL&&current1->next!=NULL)
       {current1->next=current1->next->next;current1=current1->next;}
       else
       {
           f1=0;
       }
       if(current2!=NULL && current2->next!=NULL)
       {current2->next=current2->next->next;current2=current2->next;}
       else
       {
           f2=0;
       }
       if(f1==0&& f2==0)
       break;
       
   }
}





int main()
{
struct node* start = NULL;
struct node* a = NULL;
struct node* b = NULL; 
push(&start, 5);
push(&start, 4);
push(&start, 3);
push(&start, 2);
push(&start, 1);
push(&start, 0);
cout << " Original linked List: ";
printList(start); 
cout << endl;
fun(start, &a, &b); 
cout<<" Resultant Linked List 'a' ";
printList(a);		 
cout << endl;
cout<<" Resultant Linked List 'b' ";
printList(b);			 

return 0;
}
