#include<iostream>
using namespace std;
int main()
{
    int i,j,count=0,n;

    cout<<"Input A Number:";
    cin>>n;

    for(i=n; i>=1; i--)  //(n-1) Also we can use because 1 is not prime nunber.
    {


        for(j=2; j<i; j++)
        {

            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0 && i!=1)
        {

            cout<<i<<endl;
            break;
        }
        count =0;
    }

    return 0;
}
