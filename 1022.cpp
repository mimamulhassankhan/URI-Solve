#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a > b) return gcd(a-b, b);

    return gcd(a, b-a);
}

int main()
{
    int tc,n1,n2,d1,d2;
    char ch;
    cin>>tc;
    while(tc--){
        scanf("%d /%d %c %d / %d",&n1,&n2,&ch,&n2,&d2);
        cout<<n1<<" "<<d1<<" "<<ch<<" "<<n2<<" "<<d2<<endl;
        if(ch=='+' || ch=='-'){
            int nom;
            if(ch=='+')nom = (n1*d2) + (n2*d1);
            else if(ch=='-')nom = (n1*d2) - (n2*d1);
            int denom = d1*d2;
            int common_point = gcd(nom,denom);
            cout<<nom<<"/"<<denom<<" = "<<nom/common_point<<"/"<<denom/common_point<<"\n";
        }
        else if(ch=='*'){
            int nom = n1*n2;
            int denom = d1*d2;
            int common_point = gcd(nom,denom);
            cout<<nom<<"/"<<denom<<" = "<<nom/common_point<<"/"<<denom/common_point<<"\n";
        }
        else if(ch=='/'){
            int nom = n1*d2;
            int denom = n2*d1;
            int common_point = gcd(nom,denom);
            cout<<nom<<"/"<<denom<<" = "<<nom/common_point<<"/"<<denom/common_point<<"\n";
        }
    }

    return 0;
}
