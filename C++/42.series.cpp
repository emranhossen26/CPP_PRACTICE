#include<iostream>
using namespace std;

int main()
{
    
    int i,n,sum=0;
    cout<<"Enter Your Number:";
    cin>>n;

    for(i=1;i<=n;i+=1)
    {

        sum=sum+i;
        
    }

    cout<<"1+2+3+.......+"<<n<<"="<<sum;

    return 0;
}