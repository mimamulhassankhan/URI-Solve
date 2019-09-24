#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map <char, double> mp; string s; double sum=0.0,line_c=0.0;
    mp.insert(make_pair('W', 1.00));
    mp.insert(make_pair('H', 1.00/2.00));
    mp.insert(make_pair('Q', 1.00/4.00));
    mp.insert(make_pair('E', 1.00/8.00));
    mp.insert(make_pair('S', 1.00/16.00));
    mp.insert(make_pair('T', 1.00/32.00));
    mp.insert(make_pair('X', 1.00/64.00));

    while(getline(cin,s) && s.compare("*")!=0){
        for(long i=0; s[i]!='\0'; i++){
            if(s[i]>='A' && s[i]<='Z'){
                auto it = mp.find(s[i]);
                sum+=it->second;
            }
            else if(s[i]=='/'){
                if(sum==1.00) line_c++;
                sum = 0.0;
            }
        }
        cout<<line_c<<"\n";
        line_c = 0.0;
    }

    return 0;
}
