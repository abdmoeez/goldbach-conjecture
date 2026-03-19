#include<iostream>
using namespace std;

//IsPrime Function Declaration
bool isprime(int num);

int main()
{
    int evennum;

    cout<<"Input An Even Number Greater Than 2 : ";
    cin>>evennum;

    while(evennum%2==1 || evennum<=2)
    {
        cout<<"Number is Odd Or Less Than 2! Enter Again : ";
        cin>>evennum;
    }


    for(int i=2; i<=evennum/2; i++)
    {
        if(isprime(i) && isprime(evennum-i))
        {
            cout<<i<<" + "<<evennum-i<<" = "<<evennum<<endl;
        }
    }
    
}

//Function To Check Whether Number Is Prime
bool isprime(int num)
{
    for(int d=2; d*d<=num; d++)
    {
        if(num%d==0)
        {
            return false;
        }
    }

    return true;
}
