#include <stdio.h>
int main() {
	int score;
	scanf("%d",&score);
	
	if (score < 30) { //29 28 27....
		printf("You are false \n");	
		printf("You must get %d to passed\n",(40-score));	
	}
	else 
		if (score < 40) //30 31 32...39
			printf("You can test again \n");
		else //40 41 42 43....
			printf("Congratulations! You Passed \n"); 
	
	/*if (score < 30)
		printf("You are false \n");		
	if (score>29 && score < 40)
		printf("You can test again \n");
	if (score>39)
		printf("You Passed \n");
	*/
	printf("See you again \n");
}
