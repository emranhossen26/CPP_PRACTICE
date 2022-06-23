#include<iostream>
using namespace std;
int main()
{
    
    int i,count=0,j,num1,num2;


    cout<<"Enter Two number:"<<endl;
    cin>>num1>>num2;

    for(i=num1; i<=num2; i++)
    {

        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }


        if(count==0 && i!=1)
            cout<<i<<endl;

        count=0;
    }
  
  return 0;
}
