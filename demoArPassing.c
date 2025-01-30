#include <stdio.h>
int findMax(int num[],int ArSize);
void printAr(int myAr[],int ArSize);

main() {
	int number[3] = {210,50,100};
	int score[10] = {1,2,3,4,5,6,7,8,9,10};
	int max;

	
//	printf("number1 : %d\n",number[0]);
//	printf("number2 : %d\n",number[1]);
//	printf("number3 : %d\n",number[2]);
//	printf("number4 : %d\n",number[3]);
//	printf("number5 : %d\n",number[4]);
	
	//printf("size of array number %d\n",(sizeof(number)/sizeof(number[0])));
	int numberSize=(sizeof(number)/sizeof(number[0]));
	printAr(number,numberSize);
	max = findMax(number,numberSize);
	printAr(score,10);
	
	printf("Maximum of these number is %d\n",max);
}

void printAr(int myAr[],int ArSize) {
	int i;
	for (i=0;i<ArSize;i++) 
		//printf("array%d : %d\n",i+1,myAr[i]);
		printf("%d ",myAr[i]);
	
	printf("\n");
}

int findMax(int num[],int ArSize) {
	int maximum,i;
	maximum = num[0];

	for(i=1;i<ArSize;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	//num[2]=1000;
	return maximum;
}

