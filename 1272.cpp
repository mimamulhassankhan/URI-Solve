#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s,w,p;
    getline(cin,s);
    while(t--){
        getline(cin, s);
        stringstream ss(s);
        string g;
        while(getline(ss, g, ' ')){
            w+=g[0];
        }
        for(auto i : w){
            //cout<<i<<" ";
            if(int(i)!=0) p+=i;
        }
        cout<<p<<"\n";
        w.clear();
        p.clear();
    }

    return 0;
}
