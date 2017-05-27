#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
  int a[]={6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
  int num=0;
  int sum=0;
  map<int,int>m;
  for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
  {
      sum=sum+a[i];
     
      if(m.find(sum-num)!=m.end())
      {
          cout <<m[sum-num]+1 << i << endl;
      }
      if(sum==num)
      {
          cout << 0 << i << endl;
      }
      
      m[sum]=i;
     
  }
  return 0;   
    
    
    
    
    
    
    
}