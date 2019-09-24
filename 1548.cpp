#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int tc,n,nn,c=0; vector<int>vec1,vec2;
    cin>>tc;
    cin.ignore();
    while(tc--){
        cin>>n;
        int mm = n;
        while(n--){
            cin>>nn;
            vec1.push_back(nn);
            vec2.push_back(nn);
        }
        sort(vec1.begin(),vec1.end(),greater<int>());
        for(int i=0; i<mm; i++){
            if(vec1[i]== vec2[i])c++;
        }
        cout<<c<<"\n";
        c = 0;
        vec1.clear();
        vec2.clear();
    }

    return 0;
}
