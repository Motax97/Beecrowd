#include <stdio.h>
int main() {
int n,par=0,impar=0,positivo=0,negativo=0;
for(int i=0;i<5;i++){
    scanf("%d\n",&n);
    if(n>0){
      positivo++;
      if(n%2==0) par++;
      else impar++;
    }else if(n<0){
      negativo++;
      if(n%2==0) par++;
      else impar++;
    }else{
      par++;
    }
}
printf("%d valor(es) par(es)\n",par);
printf("%d valor(es) impar(es)\n",impar);
printf("%d valor(es) positivo(s)\n",positivo);
printf("%d valor(es) negativo(s)\n",negativo);
    return 0;
}
