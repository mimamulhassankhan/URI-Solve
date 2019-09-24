#include<iostream>
using namespace std;

int main()
{
    int t; string s;
    cin>>t;
    getline(cin,s);
    while(t--){
        cin>>s;
        if(s[1]>='A' && s[1]<='Z'){
            if(s[0]==s[2]){
                cout<<(s[0]-'0')*(s[2]-'0')<<"\n";
            }else {
                cout<<(s[2]-'0')-(s[0]-'0')<<"\n";
            }
        }else {
            if(s[0]==s[2]){
                cout<<(s[0]-'0')*(s[2]-'0')<<"\n";
            }else {
                cout<<(s[2]-'0')+(s[0]-'0')<<"\n";
            }
        }
    }

    return 0;
}
