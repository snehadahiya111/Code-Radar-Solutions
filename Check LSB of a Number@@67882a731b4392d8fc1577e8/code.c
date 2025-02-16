#include<stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    printf("%d",(a=a|1) && (a=a~1));
    return 0;
}