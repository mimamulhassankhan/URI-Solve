#include<iostream>
using namespace std;

int main()
{
    long a,b;
    cin>>a>>b;

    long resA = (a*b) + ((a-1)*(b-1));
    long resB = (a-1)*2 + (b-1)*2;

    cout<<resA<<"\n"<<resB<<"\n";

    return 0;
}
