#include<stdio.h>
int main() {
	int a1[20]; //1
	int a2[]={2,3,4};//2
	int a3[5]={1,2};//3
	//int a4[];//4
	int i,n;
	scanf("%d",&n);
	//input to array
	for(i=0;i<n;i++) {
		scanf("%d",&a1[i]);
	}
	//output from array
	for(i=0;i<n;i++) {
		printf("%d ",a1[i]);
	}
	
}
