#include<iostream>
using namespace std;
int main()
{

    int n,i,count=0;

    cout<<"Enter An Integer Number:";
    cin>>n;

    for(i=2; i<n; i++)
    {

        if(n%i==0)
        {

            count ++;
        }


    }

    if(count==0)
    {
        cout<<"Prime Number";
    }

    else
    {

        cout<<"Not Prime NUmber";
    }
  
  return 0;

}
