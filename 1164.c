#include <stdio.h>
 
int main() {
 
int n,x;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d\n",&x);
    int soma=0;
    for(int j=1;j<x;j++){
        if(x%j==0)soma+=j;
    }
    if(soma==x) printf("%d eh perfeito\n",x);
    else printf("%d nao eh perfeito\n",x);
}
    return 0;
}
