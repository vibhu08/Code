#include <iostream>
using namespace std;
int F[2][2] = {{1,1},{1,0}};
int M[2][2] = {{1,1},{1,0}};
void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
void power(int n)
{
  if(n==0 || n==1) return ;
  if(n%2==0){power(n/2);multiply(F,F);}
  else      {power(n/2);multiply(F,F);multiply(F,M);}                        
}
int fib(int n)
{
   if(n==0)return 0; else if(n==1) return 1; 
   power(n-1);return F[0][0];
}
int main() {
	// your code goes here
	cout << fib(9);
	return 0;
}




