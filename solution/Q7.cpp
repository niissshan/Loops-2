#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"*********************************"<<endl;
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
        cout<<factorial<<endl;
    }
}