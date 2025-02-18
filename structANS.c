#include <stdio.h>
// struct Person people[MAX_PEOPLE]
//       = { { "Ram", 21 }, { "Rohit", 25 } };

int main() {
	struct Student {
		char name[64]; //student name
		char ans[10];  //answer sheet
	};
	struct Student std[2]={ 
		{"MR.AAA",{'A','B','A','C','C','D','E','E','A','D'}},
		{"MR.BBB",{'D','B','A','B','C','A','E','E','A','D'}}
	};

    char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
	int i,score=0;
   
   	for(i=0;i<10;i++) {
   		if (std[0].ans[i]==charkeys[i])
			score++;
	}
    printf("%s => %d\n", std[0].name, score);//7
    score=0;
    for(i=0;i<10;i++) {
   		if (std[1].ans[i]==charkeys[i])
			score++;
	}
	printf("%s => %d\n", std[1].name, score);//6
}

/*    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},//7
			{'D','B','A','B','C','A','E','E','A','D'},//6
			{'E','D','D','A','C','B','E','E','A','D'},//5
			{'C','B','A','E','D','C','E','E','A','D'},//4
			{'A','B','D','C','C','D','E','E','A','D'},//8
			{'B','B','E','C','C','D','E','E','A','D'},//7
			{'B','B','A','C','C','D','E','E','A','D'},//7
			{'E','B','E','C','C','D','E','E','A','D'}};//7
*/

