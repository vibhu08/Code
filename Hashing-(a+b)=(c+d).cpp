//Same as find subarray with a given sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
  int a[]={3, 4, 7, 1, 2, 9, 8};
 
  map<int,pair<int,int > > m;
  for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
  {
      for(int j=i+1;j<sizeof(a)/sizeof(a[0]);j++)
      {
          
          int sum=a[i]+a[j];
          if(m.find(sum)!=m.end())                                                       //For distinct condition (i&j!=a[sum].first,a[sum].second)
          {
              cout << i << j << m[sum].first << m[sum].second << endl;
           }
          m[sum]=make_pair(i,j);
      }
   
     
  }
  return 0;   
    
    
    
    
    
    
    
}
