#include<stdio.h>
int main(){
   char A;
    scanf("%c",&A);
    if (A>='A' && A<='Z')
    printf("Uppercase");
    else if (A>='a' && A<='z')
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}