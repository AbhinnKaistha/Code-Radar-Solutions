#include<stdio.h>
int main(){
    long int a;
    scanf("%uld",&a);
    if(a & 0x80000000){
        printf("Set");
    }
    else {
        printf("Not Set");
    }
}