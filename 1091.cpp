#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long k,n,m,x,y;
    while(cin>>k){
        if(k==0)break;
        cin>>n>>m;
        while(k--){
            cin>>x>>y;
            if(x>n && y<m)cout<<"SE\n";
            else if(x>n && y>m)cout<<"NE\n";
            else if(x<n && y>m)cout<<"NO\n";
            else if(x<n && y<m)cout<<"SO\n";
            else cout<<"divisa\n";
        }
    }


    return 0;
}
