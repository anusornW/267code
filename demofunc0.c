#include<stdio.h>
int add(int,int);// int add (int a,int b);
void checkresult (int);

int main() {
	printf("%d\n",add(3,7));
	checkresult(add(-5,5));
}

int add (int a, int b) {
	int result;
	result = a+b;
	return result;
}
void checkresult (int result) {
	if(result < 0)
		printf("result is negative");
	if(result == 0)
		printf("result is zero");
	if(result > 0)
		printf("result is positive");
}
