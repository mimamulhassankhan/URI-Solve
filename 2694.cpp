#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    bool number_flag = false;
    string s;
    long n,p=1,temp, sum = 0,ch1;
    cin>>n;
    getline(cin,s);
    while(n--){
        getline(cin,s);
        for(long i=(s.length()-1); i>=0; i--){
            if(s[i]>=48 && s[i]<=57){
                temp = s[i] - '0';
                sum = sum + (p*temp);
                p = p*10;
            }
            else{
                p = 1;
            }
        }
        cout<<sum<<"\n";
        sum =0;
        p=1;
    }

    return 0;
}
