#include<iostream>
using namespace std;
int main()
{
	int matrix[10][10],row,col,r,c;

	cout<<"How many row in the Matrix:"<<endl;
	cin>>r;
	cout<<"How many Collamn in the Matrix"<<endl;
    cin>>c;


    for(row=0;row<r;row++)
    {
    	for(col=0;col<c;col++)
    	{   
    		cout<<"Matrix"<<"["<<row<<"]"<<"["<<col<<"]:";
    		cin>>matrix[row][col];
    	}

    	cout<<endl;
    }


    cout<<"Matrix is:"<<endl;
    for(row=0;row<r;row++)
    {
    	for(col=0;col<c;col++)
    	{
    		cout<<"  "<<matrix[row][col];
    	}

    	cout<<endl;
    }
    

    return 0;
}