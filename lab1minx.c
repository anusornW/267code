#include<stdio.h>
int main() {
	int num1;
	int num2;
	printf("n1:");
	scanf("%d",&num1);
	printf("n2:");
	scanf("%d",&num2);
	if (num1>num2){
		printf("num1 is greater than num2");
		//diff of num1 and num2
		printf("\n%d",(num1-num2));
	} else {
		printf("num2 is greater than num1");
		//diff of num2 and num1
		printf("\n%d",(num2-num1));
	}
}
