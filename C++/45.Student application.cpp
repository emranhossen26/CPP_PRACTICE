#include<iostream>
using namespace std;
int main()
{

	int num[10],n,sum=0;

	cout<<"Enter number of student:";
	cin>>n;

	for(int i=1;i<=n;i++)
	{
        
        cout<<"Marks FOR STUDENT"<<i<<":";
        cin>>num[i];
	}


	for(int i=1;i<=n;i+=1)
	{
        
        sum=sum+num[i];
        
	}

     cout<<"Total Number is:"<<sum<<endl;
    
     double avg=(float)sum/n;

     cout<<"The Avg Number is:"<<avg<<endl;


     int max=num[0];

     for(int i=2;i<=n;i+=1)
	{
        
        if(num[i]>max)
        {
        	max=num[i];
        }
        
	}

     cout<<"Maximum Number is:"<<max<<endl;

     
     int min=num[1];

     for(int i=2;i<=n;i+=1)
	{
        
        if(num[i]<min)
        {
        	min=num[i];
        }
        
	}

    cout<<"Minimum Number is:"<<min;


    return 0;

}