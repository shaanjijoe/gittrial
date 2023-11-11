#include <bits/stdc++.h>
using namespace std;

int sub(int a, int b)
{
    return a-b;
}

int add (int a,int b)
{
    return a+b;
}
int multi(int a,int b)
{
    return a*b;
}
int divi(int a,int b)
{
    return a/b;
}
int main()
{
    cout<<"Main Function"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    cout<<sub(a,b);
    return 0;
}