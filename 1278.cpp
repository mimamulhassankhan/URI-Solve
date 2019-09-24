#include<string>
#include<iostream>
#include<algorithm>
#include<cctype>
#include<iomanip>
#include<list>
#include<iterator>
using namespace std;


int main()
{
    list <string> lst;
    long t,max_len = -1; string input;
    while(true){
        cin>>t;
        if(t==0)break;
        getline(cin,input);
        while(t--){
            getline(cin,input);
            bool prev_is_space = true;
            input.erase(remove_if(input.begin(), input.end(), [&prev_is_space](char curr) {
                bool r = ::isspace(curr) && prev_is_space;
                prev_is_space = ::isspace(curr);
                return r;

            }), input.end());
            long t_s = input.size();
            max_len = max(max_len, t_s);
            if(input[t_s-1]==' '){
                input.erase(input.end()-1);
            }
            input.erase(0, input.find_first_not_of(' '));
            lst.push_back(input);
            if(t==0){
                for(auto v: lst){
                    cout<<setw(max_len)<<v<<"\n";
                }
                cout<<"\n";
            }
        }
        lst.clear();
        max_len = -1;
    }


    return 0;
}
