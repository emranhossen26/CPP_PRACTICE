#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    float i;
    float  a,n,sum=0;

    cout<<"Enter the last number:"<<endl;
    cin>>n;

    //cout<<"1+1/2^2+1/3^3+......1/"<<n<<"^"<<n<<"=";

    for(i=1;i<=n;i++)
    {

        a=1/pow(i,i);

        cout<<"1/"<<i<<"^"<<i<<"="<<a<<endl;

        sum=sum+a;
    }

    cout<<"The Sum of the above series is: "<<sum;

    return 0;

}
