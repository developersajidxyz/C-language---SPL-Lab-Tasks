#include <stdio.h>
int main(){
    FILE *f; char s[100];
    printf("Enter text: "); gets(s);
    f=fopen("INPUT.txt","w"); fputs(s,f); fclose(f);
    f=fopen("INPUT.txt","r"); fgets(s,100,f); fclose(f);
    printf("File content: %s",s);
}
