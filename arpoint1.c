#include <stdio.h>
int summation(int *a, int n); 	
int sumv2(int b[],int n);

int main() {
	int x[3] = { 3, 2, 6 }, sum,sum2;
	int y[4] = {10, 20, 1, 2};
	sum = summation(x, 3); //a=&x[0]
	printf("%d\n", sum);
	sum2=sumv2(y,4);//b=&y[0]
	printf("%d\n", sum2);
}
int sumv2(int b[], int n) {
	int i, sum = 0;
	for(i = 0; i < n; i++)
		sum += b[ i ];
	return sum;
}
//a=&x
int summation(int *a, int n) {
	int i, sum = 0;
	for(i = 0; i < n; i++)
		//sum += a[ i ];
		sum += *(a+i);
	return sum;
}
