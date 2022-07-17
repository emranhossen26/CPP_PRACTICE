#include<iostream>
using namespace std;
int main()
{

    int num[28];
    int i,n;

    cout<<"How many numbers:";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
    	cin>>num[i];
    }

    cout<<"Numbers Are:"<<endl;

    for(i=0;i<n;i++)
    {
    	cout<<num[i]<<endl;
    }


}