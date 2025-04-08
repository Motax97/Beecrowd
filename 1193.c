#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
void decimal_hexadecimal(char *v){
  int ar[300],i=0,q;
  int l=atoi(v);
  while(l>0){
    q=l%16,l/=16,ar[i]=q,i++;
}
for(int k=i-1;k>=0;k--){
      if(ar[k]==10) printf("a");
      else if(ar[k]==11) printf("b");
      else if(ar[k]==12) printf("c");
      else if(ar[k]==13) printf("d");
      else if(ar[k]==14) printf("e");
      else if(ar[k]==15) printf("f");
      else printf("%d",ar[k]);
    }
    printf(" hex\n");
}
