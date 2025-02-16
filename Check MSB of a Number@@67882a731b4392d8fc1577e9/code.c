#include<stdio.h>
int main(){
    long int a;
    scanf("%ld",&a);
    if(a & -128){
        printf("Set");
    }
    else {
        printf("Not Set");
    }
}