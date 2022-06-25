#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;

    cout<<"Enter A Nuber:"<<endl;
    cin>>num;

    while(num>0)
    {       
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }

    cout<<"Sum of digit: "<<sum;

    return 0;
}
