#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=8;
    int a[]={100,80,70,60,70,60,75,85};
    stack<int> s;
    s.push(0);
    int b[n];
    b[0]=1;
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && a[s.top()]<=a[i])
        s.pop();
        
        if(s.empty()==true)
         b[i]= i+1;
        
        else
         b[i]= i-s.top();
        
         s.push(i);
    }
    for(int i=0;i<n;i++)
    cout << b[i] << endl;
    
    
	return 0;
}
