#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c >= 'a' && c <= 'z'){
        int ans;
        ans = c - 32;
        printf("%c",ans);
    } else {
        int ans;
        ans = c + 32;
        printf("%c",ans);
    }
    return 0;

    // Solution accepted:  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
}