#include<iostream>
#include<thread>
using namespace std;

//Global Array
bool arr[1000001];

//Function to build a sieve array
void sieve()
{
    //All true
    for(int i=0; i<=1000000;i++)
    {
        arr[i]=true;
    }
    arr[0]=false;
    arr[1]=false;

    //Falsing All Non Primes
    for(int i=2; i*i<=1000000;i++)
    {
        if(arr[i]==true)
        {
            for(int j=2;i*j<=1000000;j++)
            {
                arr[i*j]=false;
            }
        }
    }

}

//Check if sieve holds
void checkrange(int start, int end)
{
    for(int i=start; i<=end;i+=2)
    {
        bool found=false;

        for(int j=2;j<=i/2;j++)
        {
            if(arr[j]==true && arr[i-j]==true)
            {
                found=true;
                break;
            }
        }
        if(found==false)
        {
            cout<<"Conjecture FAILED at "<<i<<endl;
        }
    }
}

int main()
{
    //Create Sieve
    sieve();

    thread t1(checkrange,4,500000);
    thread t2(checkrange,500002,1000000);

    t1.join(); //Wait for this thread to finish work to go to next line
    t2.join(); //Wait for this thread to finish work to go to next line

    cout<<"Conjecture holds up to 1,000,000!"<<endl;

    return 0;
}