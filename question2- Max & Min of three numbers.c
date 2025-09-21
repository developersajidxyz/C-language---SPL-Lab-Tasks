#include <stdio.h>
struct S{char name[20];int marks;}s[5],t;
int main(){
    for(int i=0;i<5;i++) scanf("%s%d",s[i].name,&s[i].marks);
    for(int i=0;i<4;i++) for(int j=0;j<4-i;j++) if(s[j].marks<s[j+1].marks){
        t=s[j]; s[j]=s[j+1]; s[j+1]=t;}
    for(int i=0;i<5;i++) printf("%s %d\n",s[i].name,s[i].marks);
}
