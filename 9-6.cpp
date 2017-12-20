#include<stdio.h>
#include<string.h>

int str_chnum(const char s[],int c)
{
	int count=0;
	for(int i=0;i<strlen(s);i++)
	  if(s[i]==c)
	   count ++;
	   
	printf("%d",count);
	
}


int main(void){
	char s[50];
	char c;
    int count=0;
	
	gets(s);
	printf("%s\n",s);
	scanf("%c",&c);
	putchar(c);
	
	return 0; 
	}
	
	
	
	//printf("%d\n",str_chnum(s,c));
	

