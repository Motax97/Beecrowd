#include <stdio.h>
int main() {
int n,r1,r2;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d %d\n",&r1,&r2);
    printf("%d\n",r1+r2);
}
    return 0;
}
