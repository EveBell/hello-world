#include<stdio.h>
int str_char(const char s[],int c){
	int i,j,z;
	i=0,j=0,z=0;
	while(s[i])
	i++;
	
	for(j=0;j<i;j++){
		if(s[j]=='c')
		 z++;
		 
		else z=-1;
	}
}


int main(void){
	char x[5];
	int y;int i=0;
	scanf("%d",&y);
	gets(x);
	while(x[i])
	 putchar(x[i]);
}
