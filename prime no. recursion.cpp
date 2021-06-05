#include<iostream>
using namespace std;
int isPrime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return isPrime(i+1,num);
    }
}
int main()
{
    int n;
    cout<<"Enter the N Value:";
    cin>>n;
    cout<<isPrime(2,n);
       
}
