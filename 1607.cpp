#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<b.compare(a)<<"\n";
    }

    return 0;
}
