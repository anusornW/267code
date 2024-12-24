#include <stdio.h>
int main() {
	int A[3][3]={{1,2,3}, {4,5,6},{7,8,9}};
	int B[2][3]={{5,6,7}, {8,9,10}};
	int C[4][2];
	int i,j;
	//input to C
	for(i=0;i<4;i++) {
		for(j=0;j<2;j++) {
			//printf("C[%d][%d]: ",i,j);
			scanf("%d",&C[i][j]);
		}
	}
	
}
