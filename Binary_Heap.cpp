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
    int smallest=i;if(2*i+1<size &&a[i]>a[2*i+1]) smallest=2*i+1;if(2*i+2<size && a[i]>a[2*i+2])smallest=2*i+2;
    
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
	

	cin >> capacity;
    a=new int[capacity];
	for(int i=0;i<capacity;i++)
	{cin >>a[i];fun1(a[i]);//insert} 
	 fun3(0);//delete
    for(int i=0;i<size;i++)
	{cout <<a[i] << endl;} //printing
	return 0;
}
