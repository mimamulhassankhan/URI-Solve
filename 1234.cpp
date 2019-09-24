#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
    bool Cap_char = false;
    char s[1000];
    while(gets(s)){
        for(long i=0; s[i]!='\0'; i++){
            if(s[i]==' ')cout<<" ";
            if(!Cap_char){
                if(s[i]>=65 && s[i]<=90){
                    printf("%c",s[i]);
                    Cap_char = true;
                }
                else if(s[i]>=97 && s[i]<=122){
                    printf("%c",s[i]-32);
                    Cap_char = true;
                }
            }
            else{
                if(s[i]>=65 && s[i]<=90){
                    printf("%c",s[i]+32);
                    Cap_char = false;
                }
                else if(s[i]>=97 && s[i]<=122){
                    printf("%c",s[i]);
                    Cap_char = false;
                }
            }
        }
        cout<< "\n";
        Cap_char = false;
    }

    return 0;
}
