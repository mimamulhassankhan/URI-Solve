#include<IOSTREAM>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main()
{
    string s; multimap<int,int> mp;
    long n,arr_count[26],ch1,hi = -1;
    cin>>n;
    getline(cin,s);
    while(n--){
        getline(cin,s);
        for(long i=0; s[i]!='\0'; i++)s[i] = tolower(s[i]);
        for(long i=0; i<26; i++)arr_count[i] = 0;
        size_t len = s.size();
        //cout<<s<<"\n";
        for(long i=0; i<len; i++){
            if(s[i]>=97 && s[i]<=122){
                ++arr_count[s[i]-97];
            }
        }
        for(long i=0; i<26; i++){
            if(arr_count[i]!=0){
                mp.insert(make_pair(arr_count[i], i));
            }
        }

//        for(auto i: mp){
//            cout<<i.first<<" "<<i.second<<"\n";
//        }
        //cout<<"\n";
        auto  mx = max_element(mp.begin(),mp.end());
        multimap <int, int>::iterator it;
        while(it==mp.end()){
            auto it = mp.find(mx->first);
            if(it!=mp.end()){
                cout<<(char)it->second + 97<<"\n";
            }
            it++;
        }
//        for(auto i: mp){
//            cout<<mx->first<< " "<<i.second<<"\n";
//
//            if(it!=mp.end()){
//                cout<<(char)it->second + 97<<"\n";
//            }
//        }
        //cout<<mx->first<< " "<<mx->second<<"\n";

        mp.clear();

//        sort(arr_count,arr_count+26);
//        for(long i=0; i<26; i++){
//            cout<<(char)arr[i]
//        }


    }

    return 0;
}
