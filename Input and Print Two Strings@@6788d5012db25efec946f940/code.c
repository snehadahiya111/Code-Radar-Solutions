#include<stdio.h>
int main(){
    char str1[20],str2[10];
    scanf("%s%s",&str1,&str2);
    fgets(str1[20]);
    fgets(str2[10]);
    printf("You entered: %s and %s",str1,str2);
    return 0;
}