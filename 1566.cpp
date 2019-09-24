#include<iostream>
#include<map>
#include<cstdio>
#include<sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t,n,q; multimap<long, long> mp;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld",&n);
        for(int i=1; i<=n; i++){
            scanf("%ld",&q);
            mp.insert(make_pair(q, i));
        }
        stringstream oss;
        for(auto i:mp){
            oss<<i.first<<" ";
        }
        string ss = oss.str();
        size_t found = ss.find_last_of(' ');
        ss.erase(found);
        printf("%s\n",ss.c_str());
        mp.clear();
    }

    return 0;
}
