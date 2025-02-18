#include <stdio.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
int checkpasswd(char *passwd);
//password accepted if only length is 5 and num of digit is 1 or more

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);

	printf("length:%d\n",strlen(password));
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkpasswd(password)) 
		//accepted
		printf("%s:accepted\n",password);
	else
		//not accepted
		printf("%s:NOT accepted\n",password);
}

int checkpasswd(char *passwd) {
	int i,accept=0,founddigit=0;
	//check length
	if (strlen(passwd)==5) {
		//check num of digit
		for (i=0;i<strlen(passwd);i++) {
			//if  (passwd[i] ) { // check ascii for number 0-9
			if(isdigit(passwd[i])) {
				founddigit=1;
				break;
			}
		}
		if (founddigit)
			accept=1;	
	}
	return accept;
}

int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}
