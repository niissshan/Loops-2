/*
WAP to print the sum of all the even digits of a given number.
Sample Input : 4556
Output: 10
*/
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Sample Input: "<<endl;
cin>>n;
int sum=0;
while(n>0)
{
int a=n;
a%=10;
if(a%2 ==0) sum+=a;
n/=10;
}
cout<<"Output: "<<sum<<endl;
}