#include<stdio.h>
int main(){
    int number; 
    scanf("%d",&number);
    int firstNumber = number / 1000;
    if(firstNumber % 2 == 0){
        printf("EVEN");
    } else {
        printf("ODD");
    }

    // solution accepted : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
}