#include<stdio.h>
#include<string.h>
/*int str_char(const char s[],int c){
	int count =0;
	while(s[i])
	 if(s[i]==c)
	  count++;
}*/
int main(void){
	char s[50];
	int ch;    int count=0;
	int i,j;
	scanf("%s",s);
	//scanf("%c",c);
	while((ch=getchar())!=EOF)
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==ch)
		count++;
	}
	
	printf("%d\n",count);
	
}
