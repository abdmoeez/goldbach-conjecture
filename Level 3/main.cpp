#include<iostream>
#include<fstream>
using namespace std;

//Function to check if number is prime
bool isprime(int num)
{
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    cout<<"Input An Even Number : ";
    cin>>n;

    while(n%2!=0 || n<2)
    {
        cout<<"You Entered An Odd Number Or Is Less Than 2! Enter Again : ";
        cin>>n;
    }

    //Checking all the pairs and storing in file
    ofstream file("results.txt");
    file<<"The Prime Pairs For "<<n<<" Are : "<<endl;
    for(int i=2;i<=n/2;i++)
    {
        if(isprime(i)==true && isprime(n-i)==true)
        {
            file<<i<<" + "<<n-i<<" = "<<n<<endl;
        }
    }
    file.close();
}