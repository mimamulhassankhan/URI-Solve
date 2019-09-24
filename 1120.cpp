#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string s,new_string;
    while(1){
        cin>>n>>s;
        char ch = n + '0';
        if(n==0 && s.compare("0")==0){
            break;
        }
        for(auto i : s){
            if(i != ch){
                new_string += i;
            }
        }
        new_string.erase(0, new_string.find_first_not_of('0'));
        if(new_string.size()==0)cout<<0<<"\n";
        else cout<<new_string<<"\n";
        new_string.clear();
        fflush(stdin);
    }

    return 0;
}
