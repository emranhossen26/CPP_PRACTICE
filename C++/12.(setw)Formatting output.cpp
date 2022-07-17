#include<iostream>
#include<iomanip>
using namespace std;
int main()

{


    float num1,num2;

    cout<<"Enter Two number:"<<endl;
    cin>>num1>>num2;


    cout<<showpoint;
    cout<<fixed;              //(Just count decimal Value)
    cout<<setprecision(5);  
    

    float sum=num1+num2;
      
    cout<<setw(20)<<"Sum is:"<<sum<<endl;


    
    float sub=num1-num2;

    cout<<setw(20)<<"Subtraction is:"<<sub<<endl;


    float  mul=num1*num2;

    cout<<setw(20)<<"Multiplication is:"<<mul<<endl;


    float div=num1/(float)num2;
    cout<<setw(20)<<"Division is:"<<div<<endl;

   
}