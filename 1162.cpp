#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec; int t,n,m,s_count=0,temp;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>m;
            vec.push_back(m);
        }
        size_t len = vec.size();
        for(int i=0; i<(len-1); i++){
            for(int j=0; j<(len-i-1); j++){
                if(vec[j] > vec[j+1]){
                    temp = vec[j+1];
                    vec[j+1] = vec[j];
                    vec[j] = temp;
                    s_count++;
                }
            }
        }
        //for(auto i: vec)cout<<i<<" ";
        cout<<"Optimal train swapping takes "<<s_count<<" swaps.\n";
        s_count = 0;
        vec.clear();
    }


    return 0;
}
