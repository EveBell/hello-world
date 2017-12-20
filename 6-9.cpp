#include<stdio.h>

void rev_intary(int v[],int n)
{
	for(int i=0;i<n/2;i++)
	{ int temp;
	  temp=v[i];
	  v[i]=v[n-1-i];
	  v[n-1-i]=temp;
	}
}
 
int main(){
	int x[5]={3,1,2,4,5};
	//for(int i=0;i<5;i++)
	  //scanf("%d",&x[i]);
	  
	rev_intary(x,5);
	for(int i=0;i<5;i++)
	  printf("%d",x[i]);
	return 0;
}
