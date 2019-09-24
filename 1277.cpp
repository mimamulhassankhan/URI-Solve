#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

double calculateResult(string str)
{
    long l1 = count(str.begin(), str.end(), 'P');
    long l2 = count(str.begin(), str.end(), 'A');

    double res = ((double)l1*100.00)/((double)l1+(double)l2);

    return res;
}

int main()
{
    int t,n;
    string s1,s2,master;
    cin>>t;
    while(t--){
        cin>>n;
        getline(cin,s1);
        getline(cin,s1);
        getline(cin,s2);
        stringstream ss1(s1);
        stringstream ss2(s2);
        string r1,r2;
        while(getline(ss1, r1, ' ') && getline(ss2,r2, ' ')){
            double res = calculateResult(r2);
            if(res<75.00){
                master+=r1+" ";
            }
        }
        if(!master.empty()){
            master.erase(master.end()-1);
        }
        cout<<master<<"\n";
        master.clear();

    }

    return 0;
}
