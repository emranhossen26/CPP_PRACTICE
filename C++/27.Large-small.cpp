#include<iostream>
using namespace std;

int main()

{
  
    int num1,num2;

    cout<<"Enter Two Integer Number:";
    cin>>num1>>num2;

    if(num1>num2)
    {

    	cout<<"Large Number is :"<<num1;
    }


    else if(num1<num2)
    {

        cout<<"Large Number is:"<<num2;
    }


     else
    {

        cout<<"Numbers are equal";
    }
    
     
     return 0;

}