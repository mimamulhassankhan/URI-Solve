#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <string> lst;
    string s;
    while(true){
        getline(cin,s);
        stringstream ss(s);
        string r;
        while(getline(ss, r, ' ')){
            lst.push_back(r);
        }
    }

    return 0;
}
