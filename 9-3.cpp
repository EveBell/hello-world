#include<stdio.h>
#define NUMBER 3
int main(void){
	int i,j;
	char s[NUMBER][128];
	
	for(i=0;i<NUMBER;i++){
		printf("s[%d]:",i);
		scanf("%s",s[i]);
	}
	for(j=0;j<NUMBER;j++)
	  { if(s[j]=='a')
		break;
	    printf("s[%d]=\"%s\"\n",i,s[j]);
	  }
	     
	return 0;
}
