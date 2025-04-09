#include <stdio.h>
#include<string.h> 
int main() {
 
char texto[51];

while(gets(texto)!=NULL){
    for(int i=0,italico=0,asterisco=0;texto[i]!='\0';i++){
        if(texto[i]=='*'){
            if(asterisco==0) printf("<b>"),asterisco=1;
            else printf("</b>"),asterisco=0;
        }else if(texto[i]=='_'){
            if(italico==0) printf("<i>"),italico=1;
            else printf("</i>"),italico=0;
        }else printf("%c",texto[i]);
    }
    printf("\n");

}
    return 0;
}
