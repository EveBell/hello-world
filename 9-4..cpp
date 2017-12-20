#include<stdio.h>
#include<string.h>                     //怎么调用这个函数？？？？？？？ 
void null_string(char s[])
{ 
    int i=0;
	for(i=0;i<strlen(s);i++)
	   {s[i]='\0';
	   while(s[i])
	     putchar(s[i++]);
	   }
}
int main(){
	char s[]="ABC";
	printf("%s\n",s);
	printf("处理后：");
	
	null_string(s);
	
	return 0;
}
