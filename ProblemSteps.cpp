#include <iostream>
using namespace std; 
int numways(int, int[]);

int main ()
{
    int n = 0;
    cout<<"Enter the Total number of steps"<<endl;
    cin>>n;
    int memo[n+1]; 
    for( int i = 0; i<n+1; i++)
    {
        memo[i] = 0;  
    }
    
    cout<<"Number of ways these steps can be climbed: "<<numways(n, memo)<<endl;
        
}
int numways(int n, int memo[] )
{
    int result = 0;
    if(memo[n] != 0)
          return memo[n]; 
    if ( n == 1 || n == 0)
        return 1; 
    else if ( n == 2 ) 
	return 2; 
    else 
    {
      result = numways((n-1),memo)+numways((n-2), memo);
      memo[n] = result ; 
      return result; 
    }

}
