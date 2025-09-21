#include <stdio.h>
int main(){
    int x,y; scanf("%d%d",&x,&y);
    int *a=&x,*b=&y; int t=*a; *a=*b; *b=t;
    printf("x=%d y=%d",x,y);
}
