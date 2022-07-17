#include<iostream>
using namespace std;

int main()
{
 
   int num1,num2;

    cout<<"Enter Two Number:";
    cin>>num1>>num2;


   int large =(num1>num2) ? num1 : num2;

   cout<<"Latge Number is:"<<large;


   return 0;
}