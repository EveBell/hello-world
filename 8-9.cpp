#include<stdio.h>//ctrl+zʱ�������� 

int main(void)
{
	int i,ch;
	int count=0;
	
	while((ch=getchar())!=EOF){
	   switch (ch) {
	   	case '\n':count++;break;
	   }
	   	
	}
	  
	printf("%d\n",count);  

}
