#include<iostream>
using namespace std; 

int main()
{
  bool loopFlg=false, maxIndex=0;
  int n = 5;
  int array[5] = {4,1,-3,8,-1};
  int maxSum = 0; 
  int maxCurr = 0; 
  maxSum = maxCurr = array[0];
  int prevVal = 0;
   
  for (int i = 1; i < n; i++ ) 
  {
      maxCurr = max ( array[i], maxCurr+array[i]);
      if( maxCurr > maxSum ) 
      {
          maxSum = maxCurr; 
          maxIndex = i; 
      }
            
  }
  cout <<" Maximum Sub Array value is "<<maxSum<<endl;
  cout <<" MaxiIndex "<<maxIndex<<endl;

  /*
  for(int i=0;i<n;i++)
  {
    tempInt = array[i]; 
    for(int j=i+1;j<n;j++)
    {
         tempInt += array[j];
         if(tempInt > maxSum )
         {   
              minIndex = i;
              maxIndex = j;
              maxSum = tempInt;
         }
    }
  }
  cout<< "MaxSum = "<<maxSum<<endl;
  cout<< "MinInd = "<<minIndex<<endl;
  cout<< "MaxInd = "<<maxIndex<<endl;
   */
  cout<<"{";
  	for( int x = 0; x < maxIndex ; x++ )
  	{
      		cout<<array[x]<<",";
  	}
  cout<<"}"<<endl;
}
