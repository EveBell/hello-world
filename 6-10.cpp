#include<stdio.h>

void intary_rcpy(int v1[],const int v2[],int n)
{
    int a[100];
	for(int i=0;i<n;i++)
	{ for(int j=n-1;j>0;j--)
	  a[i]=v2[j];
	}
	for(int i=0;i<n;i++)
	 v1[i]=a[i];
}
 
int main(){
	int x[5]={3,1,2,4,5},
	    y[5]={0,0,0,0,0};
	//for(int i=0;i<5;i++)
	  //scanf("%d",&x[i]);
	  
	intary_rcpy(y,x,5);
	for(int i=0;i<5;i++)
	  printf("%d",y[i]);
	return 0;
}
