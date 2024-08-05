#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Sample Input: "<<endl;
    cin>>n;
    int temp=n, x=0;
    while(temp>0)
    {
        x*=10;
        x+=(temp%10);
        temp/=10;

    }
    cout<<"Output is: "<<n+x<<endl;
}

