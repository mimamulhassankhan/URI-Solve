#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    bool capital_flag = false;
    int ch1,ch2;
    string s;
    while(getline(cin,s)){
        for(long i=0; s[i]!='\0'; i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                if(s[i]>=65 && s[i]<=90) capital_flag = true;
                else capital_flag = false;
                if(capital_flag){
                    ch1 = s[i]+13;
                    if(ch1>90){
                        ch2 = ch1 - 26;
                        printf("%c",ch2);
                    }
                    else printf("%c",ch1);
                }
                else{
                    ch1 = s[i]+13;
                    if(ch1>122){
                        ch2 = ch1 - 26;
                        printf("%c",ch2);
                    }
                    else printf("%c",ch1);
                }

            }
            else printf("%c",s[i]);
        }
        cout<< "\n";
    }

    return 0;
}
