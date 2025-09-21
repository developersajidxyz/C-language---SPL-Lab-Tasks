#include <stdio.h>
#include <string.h>
int main(){
    char s[50]; gets(s);
    int i=0,j=strlen(s)-1,f=1;
    while(i<j) if(s[i++]!=s[j--]){f=0;break;}
    printf("%sPalindrome",f?"":"Not ");
}
