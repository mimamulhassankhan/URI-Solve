#include<iostream>
#include<map>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
    long n,m,salary,sum=0; map<string, long> mp; char delimeter = '.'; string s,con_s,new_s;
    cin>>n>>m;
    getline(cin,s);
    while(n--){
        cin>>s>>salary;
        mp.insert(make_pair(s,salary));
    }
    while(m--){
        getline(cin, con_s, delimeter);
        for(long i=0; con_s[i]!='\0'; i++){
            if((con_s[i]>='a' && con_s[i]<='z') || (con_s[i]>='0' && con_s[i]<='9')){
                new_s+=con_s[i];
            }
            else{
                if(!new_s.empty()){
                    auto it = mp.find(new_s);
                    if(it!=mp.end()){
                        //cout<<"found!! "<<it->first<<" "<<it->second<<"\n";
                        sum+= it->second;
                    }
                    new_s.clear();
                }
            }
        }
        new_s.clear();
        cout<<sum<<"\n";
        //mp.clear();
        sum=0;
    }

    return 0;
}
