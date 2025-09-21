#include <stdio.h>
#include <string.h>
int main(){
    char s1[50],s2[50];
    gets(s1); gets(s2);
    printf("Length=%d\n",strlen(s1));
    printf("Concat=%s\n",strcat(s1,s2));
    printf("Copy=%s\n",strcpy(s1,s2));
    printf("Compare=%d",strcmp(s1,s2));
}
