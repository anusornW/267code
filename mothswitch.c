#include <stdio.h>
int main() {
	int month;
	scanf("%d",&month);
	switch (month) {
		case 12 : 
		case 1	:
		case 2	: printf("Winter"); break;
		default : printf("Invalid");
	}

return 0;
}
