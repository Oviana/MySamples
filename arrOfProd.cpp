#include<iostream>
using namespace std;

int ProductRecur(int , int[] );
int ProductDivis(int[]);

int main()
{
     int n = 4; 
     int productOfAll = 0;
     int result[n] = {0,0,0,0};
     int a[n] = { 1, 2, 3, 4 };
     cout<<"{";
     productOfAll = ProductDivis(a);
     cout<<"Product Of All"<<productOfAll<<endl;

     for (int i = 0; i <= n-1 ; i++ )
     {
         result[i] = productOfAll / a[i] ; 
         cout<<result[i];
         cout<<",";
     }
     cout<<"}"<<endl;
  
}
int ProductRecur(int index, int a[])
{
    int m = 4;
    int prod = 1;

    for(int j = 0; j <= m-1 ; j++ )
    {
       if( index != j)     
       	   prod*= a[j]; 
    }
    return prod;
}

int ProductDivis(int a[])
{
    int m = 4;
    int prod = 1;

    for(int j = 0; j <= m-1 ; j++ )
    {
       	   prod*= a[j]; 
    }
    return prod;
}

