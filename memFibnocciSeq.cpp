#include <iostream>

using namespace std; 
int fib(int, int[]);
int main()
{ 
    int n = 0;
    cout<<"Enter the positive integer ( Sequence ) in Fibonocci sequence"<<endl;
    cin>>n; 
    int memo[n+1];
    for ( int i=0; i<n+1; i++ )
    {
         memo[i] = 0; 
    }

    cout<<fib(n, memo)<<endl;

}

int fib(int n, int memo[])
{
    int result = 0;
    if(memo[n] != 0)
        return memo[n];
    if ( n == 1 || n ==2 )
         return 1; 
    else
       {
         result =  (fib((n-1), memo)+fib((n-2),memo));
         memo[n] = result; 
         return result;
       }
}
