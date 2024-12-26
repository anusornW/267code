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
	
	for(i=0;i<4;i++) {
		for(j=0;j<2;j++) {
			printf("C[%d][%d]: ",i,j);
			scanf("%d",&C[i][j]);
		}
	}
	
	//input to T
	//case1 loop
	for(i=1;i<=6;i++) {
		T[0][i]=5;
		T[1][i]=0;
		T[2][i]=5;
		T[3][i]=0;
		T[4][i]=5;
	}
	//case2 check row col
	for(i=1;i<=5;i++) {
		for(j=1;j<=6;i++) {
			if () {
				T[i][j]=5;
			}
			if () {
				T[i][j]=0;
			}
		}
	}
	//case3 input from keyboard
	
	
	//output from T
	for(i=0;i<5;i++) {
		for(j=0;j<6;j++) {
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
}
