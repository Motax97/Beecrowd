#include <stdio.h>
int main() {
int n,x,in=0,out=0;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d\n",&x);
    if(x>=10 && x<=20) in++;
    else out++;
}
printf("%d in\n",in);
printf("%d out\n",out);
    return 0;
}
