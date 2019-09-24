#include<iostream>
#define pi 3.1415
using namespace std;

int main()
{
    double r,l;
    cin>>r>>l;
    double res = (4.00/3.00)*pi*r*r*r;

    cout<<(long)l/(long)res<<"\n";

    return 0;
}
