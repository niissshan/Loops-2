#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to check for armstrong"<<endl;
    cin>>n;
    int m=n;
    int sum = 0;
    while(n>0)
    {
        int a=n;
        a%=10;
        sum += (a*a*a);        
        n/=10;
    }
    if(m==sum)
    {
        cout<<"The number is armstrong number"<<endl;
    }
    else cout<<"The number is not armstrong number"<<endl;
}