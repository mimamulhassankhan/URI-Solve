#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
    long n,q,k,w,jm=0; vector<long> v; vector<string> svec;
    while(cin>>n>>q){
        if(n==0 && q==0)break;
        while(n--){
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        while(q--){
            cin>>w;
            if(binary_search(v.begin(),v.end(),w)){
                auto low = lower_bound(v.begin(),v.end(),w);
                stringstream oss;
                oss<<w <<" found at "<<(low-v.begin()+1);
                string ss = oss.str();
                svec.push_back(ss);
            }
            else {
                stringstream oss;
                oss<<w<<" not found";
                string ss = oss.str();
                svec.push_back(ss);
            }
        }
        cout<<"CASE# "<<++jm<<":\n";
        for(auto i : svec){
            cout<<i<<"\n";
        }
        v.clear();
        svec.clear();
    }




    return 0;
}
