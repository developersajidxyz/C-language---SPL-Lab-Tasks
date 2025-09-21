#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a[n],s=0;
    for(int i=0;i<n;i++){scanf("%d",&a[i]); s+=a[i];}
    printf("Array: "); for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\nSum=%d",s);
    return 0;
}
