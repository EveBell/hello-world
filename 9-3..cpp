#include<stdio.h>
#include<stdlib.h>
#define N 3
int main(void){
	int i;
	char s[N][128];
	
	for(i=0;i<N;i++){
		printf("s[%d]:",i);
		scanf("%s",s[i]);
		}
		
	
	for(int j=0;j<N;j++)
	  if(s[j]=="$$$$$")
	    printf("%d",j);
		//break;
	  //printf("s[%d]=\"%s\"\n",j,s[j]);
	  
	  
	return 0;
}
