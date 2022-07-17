#include<iostream>
using namespace std;
int main()
{
   
   int mark;
   cout<<"Enter Any number:";
   cin>>mark;

   
if(mark>32 && mark<100)
{

    if(mark>=80)
  	cout<<"A+";


    else if(mark>=70)
  	cout<<"A";


   else if(mark>=60)
  	cout<<"A-";


  else if(mark>=50)
  	cout<<"B";


  else if(mark>=40)
  	cout<<"C";


  else if(mark>=33)
  	cout<<"D";


    }


   else
   {
      cout<<"Fail";
   }


   return 0;
}