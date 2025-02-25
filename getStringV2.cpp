#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int length, Addr;
	//char str[50];
	string str;
	printf("Please enter string : ");
	//gets(str);******
	//cin >> str;
	getline(cin, str);
	//length = strlen(str);
	length=str.length();
	printf("\nAddress of character \'a\' in the string.\n\n");
	for(Addr = 0; Addr <= length; Addr++) {
		if (str[Addr] == 'a')
		 	printf("%5d",Addr+1);
	}
	return 0;
}

