#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i = 31; i >= 0; i--) {
        if ((num & (1 << i)) == 0) {
            count++;
        } else {
            break;
        }
    }
    printf("%d",num);
}