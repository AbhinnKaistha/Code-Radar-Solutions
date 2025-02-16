#include<stdio.h>
int main(){
    long long int a;
    scanf("%lld",&a);
    if(a & 0x80){
        printf("Set");
    }
    else {
        printf("Not Set");
    }
}