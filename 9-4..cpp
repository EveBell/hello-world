#include<stdio.h>
#include<string.h>                     //��ô������������������������� 
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
	printf("�����");
	
	null_string(s);
	
	return 0;
}
