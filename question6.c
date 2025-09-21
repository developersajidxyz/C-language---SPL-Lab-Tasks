#include <stdio.h>
int main(){
    for(int n=2;n<=100;n++){
        int p=1;
        for(int i=2;i*i<=n;i++) if(n%i==0){p=0;break;}
        if(p) printf("%d ",n);
    }
    return 0;
}
