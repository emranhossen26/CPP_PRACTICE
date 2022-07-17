#include<iostream>
using namespace std;
int main()
{
 
   int row,col,n,i,j;

   cout<<"Enter The Number of Lines:";
   cin>>n;

   for(row=1;row<=n;row++)
   {

      for(col=1 ;col<=row;col++)
      {
      	cout<<"  "<<col;
      }
      
      cout<<endl;

   }


     return 0;

}