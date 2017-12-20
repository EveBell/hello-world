#include<stdio.h>

void put_stringn(const char s[],int n){
	
	int j=0,i=0;
	while(i!=n)
	{	while (s[j])
	    {putchar(s[j++]);i++;}
	}
}

int main(void)
{
	int n;
	char str[128];
	
	scanf("%s",str);
	scanf("%d",&n);
	put_stringn(str,n);
	return 0;
}

