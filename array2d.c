#include <stdio.h>
int main() {
	int A[3][3]={{1,2,3}, {4,5,6},{7,8,9}};
	int B[2][3]={{5,6,7}, {8,9,10}};
	int C[4][2];
	int T[5][6]={{5,5,5,5,5,5},
				 {0,0,0,0,0,0},
				 {5,5,5,5,5,5},
				 {0,0,0,0,0,0},
				 {5,5,5,5,5,5},
				};
	
	int i,j;
	//input to C
	/*
	for(i=0;i<4;i++) {
		for(j=0;j<2;j++) {
			printf("C[%d][%d]: ",i,j);
			scanf("%d",&C[i][j]);
		}
	}
	*/
	//input to T
	
	//output from T
	for(i=0;i<5;i++) {
		for(j=0;j<6;j++) {
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
}
