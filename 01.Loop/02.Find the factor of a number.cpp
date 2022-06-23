#include <iostream>
using namespace std;
int main()
{


  int n,i;
  cout<<"Enter Any Number:";
  cin>>n;
  
  cout<<"The Factors Are:";
  for(i=1;i<n;i++)
  {

    if(n%i==0)
      
        cout<<i<<" ";
  }
  
   return 0;
}

