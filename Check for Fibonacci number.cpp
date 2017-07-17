#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin >> n;
  if((sqrt(5*n*n+4)*sqrt(5*n*n+4)==5*n*n+4)||(sqrt(5*n*n-4)*sqrt(5*n*n-4)==5*n*n-4))
  cout << "Yes" <<end;
  else
   cout << "No" <<end;
  return 0;
}
