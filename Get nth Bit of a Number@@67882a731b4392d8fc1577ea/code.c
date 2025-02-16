#include<stdio.h>
int main(){
    int a,b;
    int bitpos;
    scanf("%d %d",&a,&b);
    bitpos=(a>>b)&1;
    printf("%d",bitpos);
}