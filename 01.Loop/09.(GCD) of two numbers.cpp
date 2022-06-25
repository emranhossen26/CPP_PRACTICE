#include<iostream>
using namespace std;
int main()
{

    int num1,num2,gcd,i;
    
    cout<<"Enter Two Number:";

    cin>>num1>>num2;

    for(i=1; i<=num1 && i<=num2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }


    cout<<"GCD is: "<<gcd<<endl;

    return 0;
}
