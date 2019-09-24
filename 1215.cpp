#include<iostream>
#include<list>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string s,new_s; list<string> ls;
    while(!getline(cin,s).eof()){
        for(long i=0; s[i]!='\0'; i++)s[i] = tolower(s[i]);
        for(long i=0; s[i]!='\0'; i++){
            if(s[i]>='a' && s[i]<='z'){
                new_s+=s[i];
            }
            else{
                if(!new_s.empty()){
                    ls.insert(new_s);
                }
                new_s.clear();
            }
        }
    }
    for(auto i:ls){
            cout<<i<<"\n";
    }
    st.clear();

    return 0;
}
