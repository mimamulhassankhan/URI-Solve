#include<iostream>
#include<map>
#include<set>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    long tc; bool flag=false; multiset<string>mst; set<string> st; map<string, double> mp;
    string s; double c=0.0;
    cin>>tc;
    getline(cin,s);
    cin.ignore();
    while(tc--){
        while(getline(cin,s)){
            if(s.empty()){
                break;
            }
            mst.insert(s);
            st.insert(s);
            c++;
        }
        for(auto it : st){
            mp.insert(make_pair(it, ((mst.count(it)/c)*100.0)));
        }
        if(flag)cout<<"\n";
        flag=true;
        for(auto i: mp){
            cout<<i.first<<" "<<fixed<<setprecision(4)<<i.second<<"\n";
        }
        st.clear();mst.clear(); mp.clear(); c=0.0; s.clear();
    }



    return 0;
}

