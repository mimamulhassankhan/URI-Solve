#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    long n,len1,len2,len;
    string s1,s2;
    cin>>n;
    while(n--){
        fflush(stdin);
        cin>>s1>>s2;
        len1 = s1.length();
        len2 = s2.length();
        if(len1>len2)len = len1;
        else len = len2;
        for(long i=0; i<len; i++){
            if(i<len1)printf("%c",s1[i]);
            if(i<len2)printf("%c",s2[i]);
        }
        printf("\n");

    }

    return 0;
}
