#include<iostream>
#include<map>
#include<string>
#include<functional>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    int arr[260]; string s; bool flag = false;
    multimap<int,int,greater<int>> mp;
    while(!getline(cin,s).eof()){
        if(flag)cout<<"\n";
        flag = true;
        size_t ww = s.size();
        for(int i=0; i<260; i++) arr[i]=0;
        for(int i=0; i<ww; i++){
            //cout<<(int)s[i]<<"\n";
            arr[(int)s[i]]++;
        }
        for(int i=0; i<260; i++){
            if(arr[i]>0){
                mp.insert(make_pair(i ,arr[i]));
            }
        }
        typedef function<bool(pair<int,int>,pair<int,int>)> comparator;
        comparator comFunctor = [](pair<int,int>n1, pair<int,int>n2)
        {
            return n1.second<n2.second;
        };
        multiset<pair<int,int>,comparator> new_mp(mp.begin(),mp.end(),comFunctor);

        for(auto i: new_mp){
            cout<<i.first<<" "<<i.second<<"\n";
        }
        //cout<<" \n";
        mp.clear();
        new_mp.clear();
    }

    return 0;
}
