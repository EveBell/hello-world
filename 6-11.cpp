#include<stdio.h>

int search_idx(const int v[],int idx[],int key,int n)
{
	int i,s;
	s=0;
	for(i=0;i<n;i++){
		if(v[i]==key)
		  {idx[s]=i;
		   s++;
		  }
	}
	
}

int main(void){
	int v[7]={1,7,5,7,2,4,7};
	int a[7];
	int key=7;
	search_idx( v,a,7,7);
	for(int i=0;i<3;i++)
	printf("%d",a[i]);
}
