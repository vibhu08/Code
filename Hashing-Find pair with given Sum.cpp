#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={20,10,5,6,1,1,0,2};
    int sum=2;
    map<int,int> m;
    int twice_count=0;
    
    for(int i=0;i<8;i++)
    m[a[i]]++;
    
    for(int i=0;i<8;i++)
    {
        twice_count=twice_count+m[sum-a[i]];                                                //No need of find() and end()
        
        if(a[i]==sum-a[i])
        twice_count--;
        
        
    }
    
    cout << twice_count/2;
    
    
}
