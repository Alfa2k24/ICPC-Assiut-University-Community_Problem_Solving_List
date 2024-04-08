#include<stdio.h>
int main(){
    float number, area, pi = 3.141592653;
    scanf("%f",&number);
    area = number * number * pi;
    printf("%0.9f",area);
    return 0;

    // solution accepted :  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
}