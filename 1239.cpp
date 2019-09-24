#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int count_i =0, count_s =0;
    char str[100];
    while(gets(str)){
        for(int i=0; str[i]!='\0';i++){
            if(str[i]=='_'){
                count_i++;
                if(count_i==1)printf("<i>");
                else if(count_i==2){
                    printf("</i>");
                    count_i = 0;
                }
            }
            else if(str[i]=='*'){
                count_s++;
                if(count_s==1)printf("<b>");
                else if(count_s==2){
                    printf("</b>");
                    count_s=0;
                }
            }
            else {
                printf("%c",str[i]);
            }
        }
        printf("\n");
        count_i = 0;
        count_s = 0;
    }

    return 0;
}
