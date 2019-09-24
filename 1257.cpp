#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    char str[100];
    long n,no,hash_sum=0;
    cin>>n;
    while(n--){
        cin>>no;
        for(long j=0; j<no; j++){
            fflush(stdin);
            cin>>str;
            for(long i=0; str[i]!='\0'; i++){
                hash_sum = hash_sum + (str[i]-65) + j + i;
            }
        }
        cout<<hash_sum<< "\n";
        hash_sum = 0;
    }

    return 0;
}
