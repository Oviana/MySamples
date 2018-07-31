#include <iostream>

using namespace std; 
int fib(int);
int main()
{ 
    int n = 0;
    cout<<"Enter the positive integer ( Sequence ) in Fibonocci sequence"<<endl;
    cin>>n;
    cout<<fib(n)<<endl;

}
int fib(int n)
{
    if ( n == 1 || n ==2 )
         return 1; 
    else
       return (fib(n-1)+fib(n-2));
}
