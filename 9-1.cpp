#include<stdio.h>//读取到空字符'0'时不继续往下 
int main(void){
	char str[]="\0";
	
	printf("字符串str为\"%s\"。\n",str);
	
	return 0;
} 
