#include<iostream>
#include<map>
#include<iomanip>
using namespace std;

int main()
{
    int t,c,n,m; string s,p; double price,sum=0.0,q;
    map <string, double> mp;
    cin>>t;
    while(t--){
        cin>>n;
        getline(cin,s);
        while(n--){
            cin>>s>>price;
            mp.insert(make_pair(s,price));
        }
        cin>>m;
        getline(cin,p);
        while(m--){
            cin>>p>>q;
            auto it = mp.find(p);
            if(it!=mp.end()){
                sum+=(q*it->second);
                //cout<<q<<" "<<it->second<<" = "<<q*it->second<<" sum = "<<sum<<"\n";
            }
        }
        cout<<"R$ "<<setprecision(2)<<fixed<<sum<<"\n";
        sum = 0.0;
        mp.clear();
    }


    return 0;
}
