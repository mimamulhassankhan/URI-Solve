#include<iostream>
#include<map>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    multimap<long , string, greater<int>> mp;
    long tc; string s,res;
    cin>>tc;
    getline(cin,s);
    while(tc--){
        getline(cin,s);
        istringstream ss(s);
        string g;
        while(getline(ss,g,' ')){
            size_t ww = g.size();
            mp.insert(make_pair(ww, g));
        }
        stringstream oss;
        for(auto i: mp){
            oss<<i.second<<" ";
        }
        string new_str = oss.str();
        size_t found = new_str.find_last_of(' ');
        new_str.erase(found);
        cout<<new_str<<"\n";
        mp.clear();
    }

    return 0;
}
