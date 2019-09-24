#include<iostream>
using namespace std;

int main()
{
    long n,a,b,c,d,e,c_multi=0,c_b=0,arr[10],ch = 65; char ss;
    while(true){
        cin>>n;
        if(n==0)break;
        while(n--){
            for(int i=0; i<5; i++, ch++){
                cin>>arr[i];
                if(arr[i]<=127){
                    //cout<<"true\n";
                    c_multi++;
                    ss = ch;
                }
                else c_b++;
            }
            if(c_multi>1 || c_b==5)cout<<"*\n";
            else cout<<ss<<"\n";
            c_multi=0;
            ch=65;
            c_b =0;
        }
        c_multi = 0;
        ch = 65;
        c_b =0;

    }

    return 0;
}
