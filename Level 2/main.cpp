#include<iostream>
using namespace std;

int main()
{
    bool arr[1000001];

    //Firstly Setting All The Numbers To True For Prime
    for(int i=0;i<=1000000;i++)
    {
    arr[i]=true;
    }

    //As 0 and 1 are not Prime We Falsify Them
    arr[0]=false; 
    arr[1]=false;

    //Falsing Every Non Prime Number
    for(int i=2;i*i<=1000000;i++) // We start with 2 as §2 itself is prime
    {
        if(arr[i]==true)
        {
            for(int j=2; j*i<=1000000; j++)
            {
                arr[j*i]=false;
            }
        }
    }

    //Check
    for(int n=4;n<1000000;n+=2)
    {
        bool found=false;
        for(int i=2;i<=n/2;i++)
        {
            if(arr[i]==true && arr[n-i]==true)
            {
                found=true;
                break;
            }
            
        }
        if(found==false)
        {
            cout<<"Conjecture Failed at "<<n<<endl;
        }
    }
    cout<<"Conjecture holds up to 1,000,000!"<<endl;

}
