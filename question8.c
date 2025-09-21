#include <stdio.h>
#include <math.h>
int main(){
    int n,org,sum=0,d; scanf("%d",&n); org=n;
    int c=0; for(int t=n;t;t/=10) c++;
    for(int t=n;t;t/=10){d=t%10; sum+=pow(d,c);}
    printf("%d is %sArmstrong",org,(sum==org?"":"not "));
    return 0;
}
