#include<stdio.h>
#include<stack>
#include<string>
#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
    bool flag =false;
    string line;
    int t,size,count=0;
    scanf("%d",&t);
    getline(cin,line);
    while(t--){
        getline(cin, line);
        size = line.length();
        stack <char> s;

        for(int i = 0; i<size; i++){
            if(line[i]=='<'){
                s.push(line[i]);
            }
            if(line[i]=='>'){
                if(!s.empty()){
                    //printf("Successfully Executed for line[%d] : %c\n",i,line[i]);
                    s.pop();
                    count++;
                }
                //else s.push(i);
            }
        }
        printf("%d\n",count);
        count = 0;
    }

    return 0;
}

