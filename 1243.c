#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
	char str[1000];
	char* token;
  int tamanho;
  while(scanf("%[^\n]\n",str)!=EOF){
    token = strtok(str, " ");
    int soma=0,c=0,d=0;
	while (token != NULL) {
		tamanho=strlen(token);

		for(int i=0;token[i]!='\0';i++){
		  if(isalpha(token[i])) d++;
		  }
		token = strtok(NULL," ");
	  if(d==tamanho || (d==tamanho-1 && token[tamanho-1]=='.')){
	    soma+=tamanho;
	    d=0; 	 c++;
	  }
		}
		
	int media;
	   
	 if(c!=0) media=soma/c;
   if(media<=3 || soma==0) printf("250\n");
   else if(media<=5) printf("500\n");
   else printf("1000\n");
  }
	return 0;
}
