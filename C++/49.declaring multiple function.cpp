#include<iostream>
using namespace std;

void additation(int,int);
void substraction(int,int);
void multiplication(int,int);
void division(int,int);        //Proto Type


int main()

{

    additation(10,20);
    substraction(40,20);
    multiplication(10,30);
    division(5,7);
    

    return 0;

}

void additation(int x,int y)
{

    int sum=x+y;
    cout<<"Sum is:"<<sum<<endl;
}


void substraction(int x,int y)
{

    int sub=x-y;
    cout<<"Subtraction:"<<sub<<endl;
}


void multiplication(int x,int y)
{

    int mul=x*y;
    cout<<"Multiplication:"<<mul<<endl;
}


void division(int x,int y)
{

    float div=(float)x/y;
    cout<<"Division:"<<div<<endl;

}


