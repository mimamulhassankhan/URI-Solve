#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[6],temp1[6], temp2[6],c_inc=0, c_dec=0;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        temp1[i] = arr[i];
        temp2[i] = arr[i];
    }
    sort(temp1, temp1+5);
    for(int i=0; i<5; i++){
        if(arr[i]==temp1[i]){
            c_inc++;
        }
    }
    sort(temp2, temp2+5, greater<int>());
    for(int i=0; i<5; i++){
        if(arr[i]==temp2[i]){
            c_dec++;
        }
    }
    if(c_inc==5)cout<<"C\n";
    else if(c_dec==5)cout<<"D\n";
    else cout<<"N\n";


    return 0;
}
