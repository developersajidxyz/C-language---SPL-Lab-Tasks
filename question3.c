#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    printf("%d is %s",n,(n%2==0?"Even":"Odd"));
    return 0;
}
