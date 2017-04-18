#include <iostream>
using namespace std;

int main() {
    int a[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    int low=0; int high=8;int store=0;int n=9;
    while(low<=high)
    {
      
       if(a[low]<=a[high])                                                                  //NO ROTATIONS
       {
           break;
       }
       int mid=(low+high)/2;int prev=(mid-1+n)%n;int next=(mid+1)%n; 
       if(a[mid]<=a[prev]&&a[mid]<=a[next])                                                 //MINIMUM ELEMENT    
       {
           store=mid;break;
       }
       else if(a[mid]>=a[low])                                                              //LEFT HALF SORTED
       {
            low=mid+1;
       }
       else if(a[mid]<=a[high])                                                             //RIGHT HALF SORTED
       {
            high=mid-1;
       }
        
    }
    cout << store << endl;
    
	return 0;
}
