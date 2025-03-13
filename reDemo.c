//https://perso.esiee.fr/~perretb/AlgorithmDesign/divide_conquer/index.html
#include <stdio.h>
int fac(int);

int main() {
	printf("%d\n",fac(5));   
}

int fac(int n) {
	int facnum;
	//base case
	if (n==1)
    	return 1;
    
	//divide & conquer
	facnum = fac(n - 1);
   	 
	//combine
	return n*facnum;    
}

