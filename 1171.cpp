#include<iostream>
#include<map>
using namespace std;

int main()
{
    long t,c,c_arr[2001]; map<long,long> mp;
    cin>>t;
    for(long i=0; i<2001; i++) c_arr[i] = 0;
    while(t--){
        cin>>c;
        c_arr[c]++;
    }
    for(long i=0; i<2001; i++){
        if(c_arr[i]>0){
            cout<<i<<" aparece "<<c_arr[i]<<" vez(es)\n";
        }
    }

    return 0;
}
