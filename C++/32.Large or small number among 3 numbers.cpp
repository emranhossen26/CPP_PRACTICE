#include<iostream>
using namespace std;
int main()
{

  int num1,num2,num3,large;

  cout<<"Enter Three Number:";
  cin>>num1>>num2>>num2;

  if(num1>num2 && num1>num3)
  {

     large = num1;

  }


  else if(num2>num1 && num2>num3)
  {


   large = num2;

  }

  else if(num3>num1 && num3>num2)
  {


	large = num3;
  }

   

  else
  {

	cout<<"Numbers Are Equal";
  }

cout<<"The Large Number is:"<<large;

   return 0;

  }