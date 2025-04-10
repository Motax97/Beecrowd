#include <stdio.h>
 #include <stdlib.h>
 #include<string.h>
int main() {
 
int n,k,soma,flag;
char *lingua1 = (char *) malloc(sizeof(char) * 30);
char *lingua2 = (char *) malloc(sizeof(char) * 30);
scanf("%d\n",&n);
while(n--){
    scanf("%d\n",&k);
    flag=1;
    scanf("%s\n",lingua1);
    for(int i=1;i<k;i++){
        scanf("%s\n",lingua2);
         if(strcmp(lingua1,lingua2)) flag=0;
         
        }
    if(flag==0) printf("ingles\n");
    else printf("%s\n",lingua1);
}
    return 0;
}
