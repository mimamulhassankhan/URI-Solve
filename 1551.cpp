#include<iostream>
#include<string>
using namespace std;

int main()
{
    long t,c_let[26],s_let=0; string s;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        for(long i=0; i<26; i++)c_let[i] = 0;
        for(long i=0; s[i]!='\0'; i++){
            if(s[i]>=97 && s[i]<=122){
                c_let[s[i]-97]++;
            }
        }
        for(long i=0; i<26; i++){
            if(c_let[i]>=1) s_let++;
        }
        if(s_let==26){
            cout<<"frase completa\n";
            s_let =0;
        }
        else if(s_let>=13){
            cout<<"frase quase completa\n";
            s_let =0;
        }
        else {
            cout<<"frase mal elaborada\n";
            s_let =0;
        }
    }

    return 0;
}
