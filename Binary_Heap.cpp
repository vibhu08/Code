#include <bits/stdc++.h>
using namespace std;
int *a;
int capacity;
int size=0;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void fun1(int num)//bottom-up insert
{
    if(size==capacity){cout << "overflow" ; return; }size++;int i=size-1;a[i]=num;
    
    while(i!=0 && a[i]<a[(i-1)/2])
    {
        swap(&a[i],&a[(i-1)/2]);
        i=(i-1)/2;
    }
}
void fun2(int i)//top-down heapify
{
    int smallest=i;if(2*i+1<size &&a[i]>a[2*i+1]) smallest=2*i+1;if(2*i+2<size && a[smallest]>a[2*i+2])smallest=2*i+2;
    
    if(smallest!=i)
    {
    swap(&a[i],&a[smallest]);
    fun2(smallest);
    }
    
    
}
void fun3(int i)//top-down delete
{
   swap(&a[i],&a[size-1]);size--;fun2(i);
}
int main() {
    int n;
    cin >> capacity >>n; // here capacity is the maximum no of elements and n is the no of of elements initially entered by user and size is the present number of elements in the array
    a=new int[capacity];
    for(int i=0;i<n;i++) // enter elements
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)// building heap in nlog(n)
    {
        fun1(a[i]);//size automatically updated
    }
    size=n;
    for(int i=n/2-1;i>=0;i--)//building heap in n // size has to be manually set
    {
        fun2(i);
    }
    int N=size;
    for(int i=1;i<=N ;i++)    //deletion or sorting // N is used becoz size will automatically be decremented
    {
        fun3(0);
    }
      for(int i=0;i<n;i++) // printing elements upto size but in sort all elemnts deleted so we take n
    {
       cout << a[i] << endl;
    }



return 0;	
}

