#include<stdio.h>
int main(){
    long long int n,m;
    scanf("%lld %lld", &n, &m);
    int summation;
    summation = (n % 10) + (m % 10);
    printf("%d",summation);
    return 0;

    // solution accepted : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
}