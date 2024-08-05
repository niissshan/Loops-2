#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number: "<<endl;
cin>>n;
cout<<"***********************************"<<endl;
int sum=0;
int a=1;
int b=1;
if(n<=2)
{
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
    }
}
if(n>2)
{
    cout<<a<<endl<<a<<endl;
   
    for(int i=3; i<=n;i++)
    {
    sum=a+b;
    a=b;
    b=sum;
    cout<<sum<<endl;

    }
}
    
}

