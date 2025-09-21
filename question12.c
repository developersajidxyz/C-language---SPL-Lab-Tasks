#include <stdio.h>
int main(){
    int n,x; scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++) if(a[i]==x){printf("Found at %d",i); return 0;}
    printf("Not found");
}
