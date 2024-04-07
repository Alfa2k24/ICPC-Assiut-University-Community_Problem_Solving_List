#include <stdio.h> 
int main (){
    char c;
    scanf("%c",&c);
    if(c >= '0' && c <= '9'){
        printf("IS DIGIT");
    } else {
        printf("ALPHA\n");
        if(c >= 'a' && c <= 'z'){
            printf("IS SMALL");
        } else if (c >= 'A' && c <= 'Z') {
            printf("IS CAPITAL");
        }
    }

    return 0;

    // solution accepted :  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
}