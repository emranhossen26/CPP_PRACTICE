#include<iostream>
using namespace std;
int main()
{
    int n,i,a,sum;
    
    cout<<"Input The Value of nth Term: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        a=(i*i);
        cout<<i<<"*"<<i<<"="<<a<<endl;
        sum=sum+a;
    }

     cout<<"The sum of the avove series:"<<sum;

     return 0;
}
