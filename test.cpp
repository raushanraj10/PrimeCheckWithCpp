#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int a,b;
    cin>>a;
    if(a==0||a==1)
        cout<<"not prime";
    else
    {
    b=prime(a);
    if(b==1)
    cout<<"prime";
    else
        cout<<"not prime";
        }
}
int prime(int l)
{
    int count=0;
    for(int i=1;i<=l/2;i++)
        if(l%i==0)
        count++;
    if(count<2)
        return 1;
    else
        return 0;

}
