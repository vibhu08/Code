#include <iostream>
using namespace std;

int main() {
    int a[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    int low=0; int high=8;int f=0;int store;
    int num=6;
    while(low<=high)
    {
       int  mid=(low+high)/2;
       if(a[mid]==num)                                                          //CASE 1
       {
           f=1;store=mid;break;
       }
       else if(a[mid]>=a[low])                                                               //LEFT HALF SORTED             
       {
           if(num>=a[low]&&num<=a[mid])                                         //CASE 2A
           {
               high=mid-1;
           }             
           else                                                                 //CASE 2B
           {
               low=mid+1;
           }
       }
       else                                                                                  //RIGHT HALF SORTED
       { 
            if(num>=a[mid]&&num<=a[high])                                       //CASE 3A
           {
               low=mid+1;
           }
           else                                                                 //CASE 3B
           {
              high=mid-1;
           }
       }
        
    }
    if(f==1) cout << store;
    else     cout << -1;
    
	return 0;
}
