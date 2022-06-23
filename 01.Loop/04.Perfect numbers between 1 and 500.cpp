#include<iostream>
using namespace std;
int main()
{

   int i,j,sum=0;

   for(i=1;i<=500;i++)
   {
       
       for(j=1;j<=500;j++)
       {

        if(j<i)
        {
        if(i%j==0)
        sum=sum+j;
        }

        }

        if(sum==i)
        {
        cout<<i<<endl;
         }

         sum=0;  
   }

}
