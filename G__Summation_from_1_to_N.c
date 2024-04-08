#include<stdio.h>
int main(){
    long long int number, summation;
    scanf("%lld", &number);
    summation = number * (number + 1) / 2;
    printf("%lld",summation);

    // solution accepted : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G
}