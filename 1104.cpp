#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <long> v1,v2;
    long n,m,value;
    while(true){
        cin>>n>>m;
        if(n==0 && m==0)break;
        for(long i=0; i<n; i++){
            cin>>value;
            v1.push_back(value);
        }
        for(long i=0; i<m; i++){
            cin>>value;
            v2.push_back(value);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<int> v(v1.size() + v2.size());
        vector<int>::iterator it, st;

        it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());

        long s = count(v.begin(), v.end(),1);

        cout <<s<< "\n";

    }

    return 0;
}
